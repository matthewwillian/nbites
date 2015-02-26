#ifndef _FieldLine_h_DEFINED
#define _FieldLine_h_DEFINED

#include "HoughLine.h"
#include <cmath>

class FieldLine
{
public: 
    FieldLine(HoughLine line1, HoughLine line2);
    
    point<double> getVanishingPoint() {return point<double>(vPx, vPy);}    
    double azimuth() {return atan2(cosT, sinT);}
    double tilt() {return atan2(cosA, sinA);}


    compute();
    
private:   
    
    double vPx, vPy; //vanishing point
    double cosT, sinT; //cos, sin of robot tilt
    double cosA, sinA; //cos, sin of robot camera azimuth wrt field line
    double y0; //world y coord of robot wrt fieldline
    double z0; //world z0 of robot (used in plan B)
                //TODO should we use z0 in plan A for error
    
}
#endif
