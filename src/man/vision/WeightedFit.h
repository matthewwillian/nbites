#pragma once

#include <math.h>

namespace man {
namespace vision {

class WeightedFit {
public:
    WeightedFit() : sw(0), sx(0), sy(0), sx2(0), sy2(0), sxy(0), solved(false),
             pLen1(0), pLen2(0), uPAI(0), vPAI(0), ssError(0) {}
    inline void add(double w, double x, double y);
    inline void add(double x, double y) { add(1.0, x, y); }
    inline void sub(double w, double x, double y);
    inline void sub(double x, double y) { sub(1.0, x, y); }
    void clear();

    double area() const { return sw; }
    double xCenter() const { return sx / sw; }
    double yCenter() const { return sy / sw; }
    double principalLength1() const { solve(); return pLen1; }
    double principalLength2() const { solve(); return pLen2; }
    bool hasPrincipalAxes() const { solve(); return (uPAI || vPAI); }
    double firstPrincipalAxisU() const { solve(); return uPAI; }
    double firstPrincipalAxisV() const { solve(); return vPAI; }
    double secondPrincipalAxisU() const { solve(); return -vPAI; }
    double secondPrincipalAxisV() const { solve(); return uPAI};
    double firstPrincipalAngle() const { solve(); return atan2(vPAI, uPAI); }
    double secondPrincipalAngle() const { solve(); return atan2(uPAI, -vPAI); }
    double sumSquaredError() const { solve(); return ssError; } // TODO implement
    double rmsError() const { solve(); return sqrt(sumSquaredError / sumW); }
     
private:
    void solve();

    double sw, sx, sy, sx2, sy2, sxy;
    bool solved;

    mutable double pLen1, pLen2;
    mutable double uPAI, vPAI;
    mutable double ssError;
};

inline void WeightedFit::add(double w, double x, double y)
{
    sw += w;
    sx += w * x;
    sy += w * y;
    sx2 += w * x * x;
    sy2 += w * y * y;
    sxy += w * x * y;
    solved = false;
}

inline void WeightedFit::sub(double w, double x, double y)
{
    sw -= w;
    sx -= w * x;
    sy -= w * y;
    sx2 -= w * x * x;
    sy2 -= w * y * y;
    sxy -= w * x * y;
    solved = false;
}

}
}
