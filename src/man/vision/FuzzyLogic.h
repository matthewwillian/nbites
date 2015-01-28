#pragma once

class Fool {
public:
    Fool(double value_);
    double get() const { return value; }
    Fool operator&(const Fool& f1, const Fool& f2) const;
    Fool operator|(const Fool& f1, const Fool& f2) const;
    Fool operator!(const Fool& f) const;

private:
    double value;
};

class FuzzyThr {
public:
    FuzzyThr(double t0_, double t1_);
    double weight(double x) const; 
    Fool operator>(double x, const FuzzyThr& thr) const;
    Fool operator<(double x, const FuzzyThr& thr) const;

private:
    double t0;
    double t1;
};
