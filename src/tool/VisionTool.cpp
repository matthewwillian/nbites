#include "VisionTool.h"
#include <QTextStream>
#include <QFileDialog>
#include <QKeyEvent>
#include <QDebug>
#include <iostream>

namespace tool {

VisionTool::VisionTool(const char* title) :
    tableCreator(this),
    visDispMod(this),
    colorCalibrate(this),
    loadBtn(new QPushButton(tr("Load Table"))),
    topConverter(),
    bottomConverter(),
    EmptyTool(title)
{
    toolTabs->addTab(&tableCreator, tr("Color Creator"));
    toolTabs->addTab(&visDispMod, tr("Offline Vision"));
    toolTabs->addTab(&colorCalibrate, tr("Color Calibrator"));

    connect(&diagram, SIGNAL(signalUnloggersReady()),
            this, SLOT(setUpModules()));

    connect(&tableCreator, SIGNAL(tableChanges(std::vector<color::colorChanges>)),
            this, SLOT(changeTableValues(std::vector<color::colorChanges>)));
    connect(&tableCreator, SIGNAL(tableUnChanges(std::vector<color::colorChanges>)),
            this, SLOT(unChangeTableValues(std::vector<color::colorChanges>)));

    QToolBar* toolBar = new QToolBar(this);
    connect(loadBtn, SIGNAL(clicked()), this, SLOT(loadColorTable()));

	toolBar->addWidget(loadBtn);
	this->addToolBar(toolBar);

	QPushButton* saveBtn = new QPushButton(tr("Save"));
	connect(saveBtn, SIGNAL(clicked()), this, SLOT(saveGlobalTable()));
	toolBar->addWidget(saveBtn);

	QPushButton* saveAsBtn = new QPushButton(tr("Save As"));
	connect(saveAsBtn, SIGNAL(clicked()), this, SLOT(saveAsGlobalTable()));
	toolBar->addWidget(saveAsBtn);

    loadLatestTable();
}

VisionTool::~VisionTool() {
}


void VisionTool::saveGlobalTable()
{

	if (loadBtn->text() == QString("Load Table")) { // no table loaded yet
		saveAsGlobalTable();
		return;
	}

	QString filename = loadBtn->text();
	globalColorTable.write(filename.toStdString());
    serializeTableName(filename);
}
void VisionTool::saveAsGlobalTable()
{

    QString base_directory = QString(NBITES_DIR) + "/data/tables";
    QString filename = QFileDialog::getSaveFileName(this,
                    tr("Save Color Table to File"),
                    base_directory + "/new_table.mtb",
					tr("Color Table files (*.mtb)"));
	globalColorTable.write(filename.toStdString());

	if (!filename.isEmpty()) {
		loadBtn->setText(filename);
        serializeTableName(filename);
    }
}

void VisionTool::loadColorTable()
{

    QString base_directory = QString(NBITES_DIR) + "/data/tables";
    QString filename = QFileDialog::getOpenFileName(this,
                    tr("Load Color Table from File"),
                    base_directory,
                    tr("Color Table files (*.mtb)"));
    globalColorTable.read(filename.toStdString());

    topConverter.loadTable(globalColorTable.getTable());
    bottomConverter.loadTable(globalColorTable.getTable());

	if (!filename.isEmpty()) {
		loadBtn->setText(filename);
        serializeTableName(filename);
    }

}

void VisionTool::loadLatestTable()
{
    QFile file("../../data/tables/latestTable.dat");
    file.open(QIODevice::ReadOnly);
    QDataStream in(&file);
    QString filename;
    in >> filename;
    if (!filename.isEmpty()) {
        globalColorTable.read(filename.toStdString());
        topConverter.loadTable(globalColorTable.getTable());
        bottomConverter.loadTable(globalColorTable.getTable());
        loadBtn->setText(filename);
    }
}

void VisionTool::serializeTableName(QString latestTableName)
{
    QFile file("../../data/tables/latestTable.dat");
    file.open(QIODevice::WriteOnly);
    QDataStream out(&file);
    out << latestTableName;
}

void VisionTool::changeTableValues(std::vector<color::colorChanges> tableAdjustments)
{
    for (int i = 0; i < tableAdjustments.size(); i++) {
        byte y = tableAdjustments[i].y;
        byte u = tableAdjustments[i].u;
        byte v = tableAdjustments[i].v;
        byte col = tableAdjustments[i].color;
        globalColorTable.setColor(y, u, v, col);
    }
    topConverter.changeTable(globalColorTable.getTable());
    bottomConverter.changeTable(globalColorTable.getTable());

}

void VisionTool::unChangeTableValues(std::vector<color::colorChanges> tableAdjustments)
{
    for (int i = 0; i < tableAdjustments.size(); i++) {
        byte y = tableAdjustments[i].y;
        byte u = tableAdjustments[i].u;
        byte v = tableAdjustments[i].v;
        byte col = tableAdjustments[i].color;
        globalColorTable.unSetColor(y, u, v, col);
    }
    topConverter.changeTable(globalColorTable.getTable());
    bottomConverter.changeTable(globalColorTable.getTable());
}

void VisionTool::setUpModules()
{
    if (diagram.connectToUnlogger<messages::YUVImage>(topConverter.imageIn, "top") &&
        diagram.connectToUnlogger<messages::YUVImage>(bottomConverter.imageIn, "bottom")) {
        diagram.addModule(topConverter);
        diagram.addModule(bottomConverter);
        topConverter.loadTable(globalColorTable.getTable());
        bottomConverter.loadTable(globalColorTable.getTable());
    }
    else
        std::cout << "Warning: Images not logged in this file. This is the VISION TOOL, DUMMY\n";

    diagram.addModule(visDispMod);
    if (diagram.connectToUnlogger<messages::YUVImage>(visDispMod.topImageIn,
                                                  "top") &&
        diagram.connectToUnlogger<messages::YUVImage>(visDispMod.bottomImageIn,
                                                      "bottom") &&
        diagram.connectToUnlogger<messages::JointAngles>(visDispMod.joints_in,
                                                         "vision_joints") &&
        diagram.connectToUnlogger<messages::InertialState>(visDispMod.inerts_in,
                                                           "vision_inertials"))
    {
        // All is well
    }
    else {
        std::cout << "Warning: Joints and Inertials not logged in this file.\n";
        portals::Message<messages::JointAngles> joints(0);
        portals::Message<messages::InertialState> inertials(0);
        visDispMod.joints_in.setMessage(joints);
        visDispMod.inerts_in.setMessage(inertials);
    }
    visDispMod.tTImage_in.wireTo(&topConverter.thrImage, true);
    visDispMod.tYImage_in.wireTo(&topConverter.yImage, true);
    visDispMod.tUImage_in.wireTo(&topConverter.uImage, true);
    visDispMod.tVImage_in.wireTo(&topConverter.vImage, true);

    visDispMod.bTImage_in.wireTo(&bottomConverter.thrImage, true);
    visDispMod.bYImage_in.wireTo(&bottomConverter.yImage, true);
    visDispMod.bUImage_in.wireTo(&bottomConverter.uImage, true);
    visDispMod.bVImage_in.wireTo(&bottomConverter.vImage, true);

    /** Color Table Creator Tab **/
    if (diagram.connectToUnlogger<messages::YUVImage>(tableCreator.topImageIn,
                                                      "top") &&
        diagram.connectToUnlogger<messages::YUVImage>(tableCreator.bottomImageIn,
                                                      "bottom"))
    {
        diagram.addModule(tableCreator);
        tableCreator.topThrIn.wireTo(&topConverter.thrImage, true);
        tableCreator.botThrIn.wireTo(&bottomConverter.thrImage, true);
    }
    else
    {
        std::cout << "Right now you can't use the color table creator without"
                  << " two image logs." << std::endl;
    }

    /** Color Calibrate Tab **/
    if (diagram.connectToUnlogger<messages::YUVImage>(colorCalibrate.topImageIn,
                                                      "top") &&
        diagram.connectToUnlogger<messages::YUVImage>(colorCalibrate.bottomImageIn,
                                                      "bottom"))
    {
        diagram.addModule(colorCalibrate);
    }
    else
    {
        std::cout << "Right now you can't use the color calibrator without"
                  << " two image logs." << std::endl;
    }
}


}
