#include <math.h>
#include "WeightedFit.h"

namespace man {
namespace vision {

double WeightedFit::angle()
{
    solve();
    return atan2(mxy, mx - my) / 2;
}

double WeightedFit::principalLength1()
{
    solve();
    return sqrt((mx + my + len) / 2) / sw;
}

double WeightedFit::principalLength2()
{
    solve();
    return sqrt((mx + my - len) / 2) / sw;
}

void WeightedFit::solve()
{
    if (solved) 
        return;

    mx = sw * sx2 - sx * sx;
    my = sw * sy2 - sy * sy;
    mxy = 2 * (sw * sxy - sx * sy);
    len = sqrt(mxy * mxy + (mx - my) * (mx - my));
    solved = true;
}

}
}
