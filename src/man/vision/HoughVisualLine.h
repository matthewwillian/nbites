#ifndef _HOUGHVISUALLINE_H_
#define _HOUGHVISUALLINE_H_

#include "geom/HoughLine.h"

namespace man {
namespace vision {

// TODO implement fixed camera params class
// TODO implement projective transformation stuff

class FieldLine
{
public:
    FieldLine(const HoughLine& a, const HoughLine& b, const FixedCameraParams& p);
    ~FieldLine() {}
    std::pair<HoughLine, HoughLine> getHoughLines() const { return lines; }

private:
    std::pair<HoughLine, HoughLine> lines;
    const FixedCameraParams& params;
};

}
}

#endif /* _HOUGHVISUALLINE_H_ */
