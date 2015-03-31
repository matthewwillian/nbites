#include "VisionModule.h"

#include "Profiler.h"
#include <iostream>

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
                               botOutPic(base())
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

    PROF_ENTER(P_VISION);

    PROF_EXIT(P_VISION);

    messages::PackedImage16 image = topYImage.message();
    const uint16_t *pixels = image.pixelAddress(0,0);
    int *void_field_line;
    FieldLinesDetector detector = FieldLinesDetector();
    detector.detect(10, void_field_line, pixels); 

#ifdef OFFLINE
    portals::Message<messages::ThresholdImage> top, bot;
    top = new messages::ThresholdImage(vision->thresh->betterDebugImage, 320, 240, 320);
    bot = new messages::ThresholdImage(vision->thresh->thresholdedBottom, 320, 240, 320);


    topOutPic.setMessage(top);
    botOutPic.setMessage(bot);

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
