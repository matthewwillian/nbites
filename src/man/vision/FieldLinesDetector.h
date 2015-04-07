#ifndef _FieldLinesDetector_h_DEFINED
#define _FieldLinesDetector_h_DEFINED

#include <list>
#include <vector>
<<<<<<< HEAD:src/man/vision/FieldLinesDetector.h
#include <boost/shared_ptr.hpp>
=======
>>>>>>> 159a79201bf410f78d48081ddcfa344bf420bc9c:src/man/vision/FieldLinesDetector.h

namespace man {
namespace vision {
	class HoughSpace;
	class EdgeDetector;
	class Gradient;
}
}

#include "HoughLine.h"
#include "HoughVisualLine.h"

namespace man {
namespace vision {

class FieldLinesDetector
{
public:
    FieldLinesDetector();
    virtual ~FieldLinesDetector() { };

    // VisualDetector interface
    virtual void detect(int upperBound,
                        int* field_edge,
                        const uint16_t *img);

    // Parameter Interface
    void setEdgeThreshold(int thresh);
    void setHoughAcceptThreshold(int thresh);

    boost::shared_ptr<Gradient> getEdges() { return mGradient; }
    std::list<HoughLine> getHoughLines() const;

    // FieldLines interface
    std::vector<FieldLine> getLines() {
        return mFieldLines;
    };

private:
    void findHoughLines(int upperBound,
                        int* field_edge,
                        const uint16_t *img);
    void refineHoughLines();
    void findFieldLines();


    boost::shared_ptr<EdgeDetector> mEdges;
    boost::shared_ptr<Gradient> mGradient;

    std::list<std::pair<HoughLine, HoughLine> > mHoughLines;
    std::vector<HoughVisualLine> mLines;
    boost::shared_ptr<HoughSpace> mHough;
};

}
}

#endif /* _FieldLinesDetector_h_DEFINED */
