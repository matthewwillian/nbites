#ifndef _FixedCameraParams_h_DEFINED
#define _FixedCameraParams_h_DEFINED

#include <cmath>

class FixedCameraParams
{
public:
    FixedCameraParams(double x0_, double y0_, double roll_, double fLen_, double z0_)
        : x0(x0_), y0(y0_), roll(roll_), fLen(fLen_), z0(z0_) {}
    
    double x0, y0; //image coords of optical axis
    double roll; //roll angle, radians
    double fLen; //focal length
    double z0; //World Z coordinate of camera
`   inline point<double> imageCoords(double x, double y) //transform world coordinates to image coordinates TODO make decision about double
    {
        double cs = cos(roll);
        double sn = sin(roll);
        double xi = (x - x0) * cs - (y - y0) * sn;
        double yi = (x - x0) * sn  + (y - y0) * cs;
    }

#endif
