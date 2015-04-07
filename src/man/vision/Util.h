#ifndef _Util_h_DEFINED
#define _Util_h_DEFINED

point<double> makeUnitVector(double x, double y)
{
    double g = sqrt(x * x + y * y);
    return point(x/g, y/g);
}

#endif
