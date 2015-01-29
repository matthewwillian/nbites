#include "FieldLinesDetector.h"
#include <stdio.h>
#include <boost/make_shared.hpp>
#include "HoughSpace.h"
#include "EdgeDetector.h"
#include "Gradient.h"

using namespace std;
using boost::shared_ptr;

namespace man {
namespace vision {

FieldLinesDetector::FieldLinesDetector() :
    mEdges(new EdgeDetector),
    mGradient(new Gradient),
    mHoughLines(),
    mFieldLines()
{
    mHough = HoughSpace::create();
}

/**
 * Detect field lines and their intersections (aka corners) in the given image
 */
void FieldLinesDetector::detect(int upperBound,
                                int* field_edge,
                                const uint16_t *img)
{
    // For safety (in case horizon is too low), scan from above the
    // given upperbound
    upperBound -= 10;

    // Only use values within the image
    upperBound = min(max(0, upperBound), IMAGE_HEIGHT-3);

    findHoughLines(upperBound, field_edge, img);
    refineHoughLines();
    findFieldLines();
}

/**
 * Computes the gradient over the Y Channel of the image and
 * runs a hough transform to find all the pairs of hough space lines
 * in an image.
 *
 * Side effects: Updates gradient with current image's gradient values,
 *               updates list of hough space lines
 */
void FieldLinesDetector::findHoughLines(int upperBound,
                                        int* field_edge,
                                        const uint16_t *img)
{
    mGradient->reset();
    mEdges->detectEdges(upperBound, field_edge, img, *mGradient);
    mHough->findLines(*mGradient, mHoughLines);
}

void FieldLinesDetector::refineHoughLines()
{
    RefinementParams firstFit(FuzzyThr(0.15, 0.30),
                              FuzzyThr(2.00, 5.00),
                              FuzzyThr(4.00, 8.00),
                              2.0);
    RefinementParams secondFit(FuzzyThr(0.15, 0.30),
                               FuzzyThr(2.00, 5.00),
                               FuzzyThr(4.00, 8.00),
                               2.0);

    for (int i = 0; i < mHoughLines.size(); i++) {
        mHoughLines[i].refine(*mGradient, firstFit);
        mHoughLines[i].refine(*mGradient, secondFit);
    }
}

/**
 * Using the found hough lines and the gradient image, find the actual
 * field lines in the image.
 */
void FieldLinesDetector::findFieldLines()
{
    // TODO loop over all pairs of lines that could be field lines
}

void FieldLinesDetector::setEdgeThreshold(int thresh)
{
    mEdges->setThreshold(static_cast<uint8_t>(thresh));
}

void FieldLinesDetector::setHoughAcceptThreshold(int thresh)
{
    mHough->setAcceptThreshold(thresh);
}

list<HoughLine> FieldLinesDetector::getHoughLines() const
{
    list<HoughLine> lines;
    list<pair<HoughLine, HoughLine> >::const_iterator i;
    for(i = mHoughLines.begin(); i != mHoughLines.end(); ++i){
        lines.push_back(i->first);
        lines.push_back(i->second);
    }
    return lines;
}

}
}
