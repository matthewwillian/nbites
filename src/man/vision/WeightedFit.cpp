#include "WeightedFit.h"

namespace man {
namespace vision {

double WeightedFit::clear()
{
    sw = 0;
    sx = 0;
    sy = 0;
    sx2 = 0;
    sy2 = 0;
    sxy = 0;
    solved = false;
}

void WeightedFit::solve()
{
    if (solved) 
        return;

    double a = sw*sx2 - sx*sx;
    double b = sw*sy2 - sy*sy;
    double c = 2.0 * (sw*sxy - sx*sy);
    double d = sqrt(c*c + (a - b)*(a - b));

    pLen1 = sqrt(1.5*(a + b + d)) / sw;
    pLen2 = sqrt(1.5*(a + b - d)) / sw;

    if (!d) {
        uPAI = 0.0;
        vPai = 0.0;
    } else {
        uPAI = sqrt(((a - b)/d + 1) / 2);
        vPAI = sqrt((1 - (a - b)/d) / 2);
        if (c < 0.0)
            uPAI = -uPAI;
    }

    solved = true;
}

}
}
