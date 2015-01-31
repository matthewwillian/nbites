#pragma once

namespace man {
namespace vision {

class WeightedFit {
public:
    WeightedFit() : sw(0), sx(0), sy(0), sx2(0), sy2(0), sxy(0),
             mx(0), my(0), mxy(0), len(0), solved(false) {}
    inline void add(double w, double x, double y);
    double area() const { return sw; }
    double xCenter() const { return sx / sw; }
    double yCenter() const { return sy / sw; }
    double angle();
    double principalLength1();
    double principalLength2();
     
private:
    void solve();

    double sw, sx, sy, sx2, sy2, sxy;
    double mx, my, mxy;
    double len;
    bool solved;
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

}
}
