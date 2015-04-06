#include "VisionModule.h"

#include "Profiler.h"
#include <iostream>

//TODO errors from here do not output to the command line

using namespace portals;

namespace man{
namespace vision{

VisionModule::VisionModule() : Module(),
                               topThrImage(),
                               topYImage(),
                               topUImage(),
                               topVImage(),
                               botThrImage(),
                               botYImage(),
                               botUImage(),
                               botVImage(),
                               joint_angles(),
                               inertial_state(),
                               vision_field(base()),
                               vision_ball(base()),
                               vision_robot(base()),
                               vision_obstacle(base()),
                               topOutPic(base()),
                               botOutPic(base()),
                               houghLineList(base())
#ifdef USE_LOGGING
                               joint_angles_out(base()),
                               inertial_state_out(base())
#endif
{
}

VisionModule::~VisionModule()
{
}

void VisionModule::run_()
{
    std::cout << "TEST 4.1" << std::endl;
    topThrImage.latch();
    topYImage.latch();
    topUImage.latch();
    topVImage.latch();
    botThrImage.latch();
    botYImage.latch();
    botUImage.latch();
    botVImage.latch();
    joint_angles.latch();
    inertial_state.latch();

    std::cout << "TEST 4.2" << std::endl;
    PROF_ENTER(P_VISION);

    PROF_EXIT(P_VISION);

    std::cout << "TEST 4.3" << std::endl;
    messages::PackedImage16 image = topYImage.message();
    const uint16_t *pixels = image.pixelAddress(0,0);
    int *void_field_line;
    FieldLinesDetector detector = FieldLinesDetector();
    detector.detect(10, void_field_line, pixels); 

    std::cout << "TEST 4.4" << std::endl;
    std::list<HoughLine> houghLines = detector.getHoughLines();


    std::cout << "TEST 4.5" << std::endl;

    messages::Lines* lines = new messages::Lines;


    std::cout << "TEST 4.6" << std::endl;

    while(houghLines.size() > 0) {
    std::cout << "TEST 4.6.1" << std::endl;
        HoughLine hLine = houghLines.front();
    std::cout << "TEST 4.6.2" << std::endl;
        messages::Lines_Line* bLine;
    std::cout << "TEST 4.6.2.1" << std::endl;
        bLine = lines->add_line();

    std::cout << "TEST 4.6.3" << std::endl;
        bLine->set_radius(hLine.getRadius());
        bLine->set_angle(hLine.getAngle());

        houghLines.pop_front();
    }

    std::cout << "TEST 4.7" << std::endl;
    houghLineList.setMessage(Message<messages::Lines>(lines));

    std::cout << "TEST 4.8" << std::endl;
#ifdef OFFLINE
//    portals::Message<messages::ThresholdImage> top, bot;
//    top = new messages::ThresholdImage(vision->thresh->betterDebugImage, 320, 240, 320);
//    bot = new messages::ThresholdImage(vision->thresh->thresholdedBottom, 320, 240, 320);
//
//
//    topOutPic.setMessage(top);
//    botOutPic.setMessage(bot);

#endif

    /* In order to keep logs synced up, joint angs and inert states are passed
     * thru the vision system. Joint angles are taken at around 100 hz, but
     * images are taken at 30 hz, but by passing joint angles thru vision we
     * get joint angles at 30 hz. */
#ifdef USE_LOGGING
    joint_angles_out.setMessage(portals::Message<messages::JointAngles>(
                                &joint_angles.message()));
    inertial_state_out.setMessage(portals::Message<messages::InertialState>(
                                  &inertial_state.message()));
#endif
}

}
}
