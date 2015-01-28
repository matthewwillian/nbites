#include "FuzzyLogic.h"

#include <algorithm>

Fool::Fool(double value_) : value(value_)
{}

Fool Fool::operator&(const Fool& f1, const Fool& f2) const
{
    return Fool(std::min(f1.get(), f2.get())); 
}

Fool Fool::operator|(const Fool& f1, const Fool& f2) const
{
    return Fool(std::max(f1.get(), f2.get())); 
}

Fool Fool::operator!(const Fool& f) const
{
    return Fool(1 - f.get());
}

FuzzyThr::FuzzyThr(double t0_, double t1_) : t0(t0_), t1(t1_)
{}

double FuzzyThr::weight(double x) const
{
    if (t0 == t1)
        return (x >= t0 ? 1. : 0.);
    return std::max(std::min((x - t0) / (t1 - t0), 0.), 1.);
}

Fool FuzzyThr::operator>(double x, const FuzzyThr& thr) const
{
    return Fool(weight(x));
}

Fool FuzzyThr::operator<(double x, const FuzzyThr& thr) const
{
    return !(x > thr);
}
