#include "HoughVisualLine.h"

#include <iostream>

using namespace std;

namespace man {
namespace vision {

FieldLine::FieldLine(const HoughLine& a, const HoughLine& b, const FixedCameraParams& p)
    : lines(a, b), params(p)
{
}

}
}
