

############################ PROJECT NAME
# The name of this cmake project
PROJECT( VISION )
CMAKE_MINIMUM_REQUIRED( VERSION 2.8.3 )

ADD_DEFINITIONS( -mmmx )

INCLUDE_DIRECTORIES( . )


############################ PROJECT SOURCES FILES
# Add here source files needed to compile this project
SET( FIELD_LINES_SRCS
  FieldLinesDetector
  CornerDetector
  HoughSpace
  HoughSpaceImpl
  EdgeDetector
  Gradient
  HoughVisualLine
  HoughVisualCorner
  HoughLine
  )

SET( VISION_SRCS 
		 VisionModule
		 ${FIELD_LINES_SRCS}
         # VisualObstacle
         #         VisualRobot
         #         VisualCross
         #         VisualLine
         #         VisualDetector
                 )

# Add the assembly files if we're not on Mac OSX
IF (UNIX AND NOT APPLE)
  SET( ASM_SRCS
    EdgeDetection.s
    Hough.s
    HoughAlt.s
    )
  LIST( APPEND VISION_SRCS ${ASM_SRCS})
  SET_PROPERTY(SOURCE ${ASM_SRCS} PROPERTY LANGUAGE C)
ENDIF()


############################ CHECK LIBRARY / EXECUTABLE OPTION
# Configure the output execuatable or shared library, and the install
# commands

# Add static library target
ADD_LIBRARY(
  vision
  STATIC
  ${VISION_SRCS}
  )

############################ SET LIBRARIES TO LINK WITH
TARGET_LINK_LIBRARIES(
  vision
  portals
  support
  messages)

############################ GTESTS
if (OFFLINE)
  nbites_add_test(CornerDetectorTest CornerDetectorTest.cpp
    vision
    )

  nbites_add_test(EdgeDetectorTest EdgeDetectorTest.cpp
    vision
    )

  nbites_add_test(FieldLinesDetectorTest FieldLinesDetectorTest.cpp
    vision
    )

  nbites_add_test(HoughSpaceTest HoughSpaceTest.cpp
    vision
    )
endif()
