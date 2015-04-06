#ifndef _FieldLinesDetector_h_DEFINED
#define _FieldLinesDetector_h_DEFINED

#include <list>
#include <vector>
#include <boost/shared_ptr.hpp>

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
    std::vector<HoughVisualLine> getLines() {
        return mLines;
    };

private:
    void findHoughLines(int upperBound,
                        int* field_edge,
                        const uint16_t *img);
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
