
#include <cstdlib>

#include "Utility.h"
using namespace std;

namespace man{
namespace vision{

// We often deal with an estimated value in comparison with a known value and
// its necessity of being within a certain amount in order to be acceptable.
bool CLOSE_ENOUGH(float arg1, float arg2, float errorAllowed) {
    return (fabs(arg2-arg1) < errorAllowed);
}

/*const float hypot(const float a, const float b) {
  return sqrt((a * a) + (b * b));
  }*/


/* From Joseph O'Rourke's Computational Geometry in C book, published 1998, p.27
 * Calculates twice the *signed* area of the triangle specified by three points
 */
const int Utility::area2(const point<int> &a, const point <int> &b,
                         const point <int> &c) {
    // Since our Y axis is backwards, we have to swap what we subtract
    // for y values
    return (b.x - a.x) * (a.y - c.y) -//(c.y - a.y) -
        (c.x - a.x) * (a.y - b.y); //(b.y - a.y);
}

/* From Joseph O'Rourke's Computational Geometry in C book, published 1998, p.29
 * "A directed line is determined by two points given in a particular order
 * (a,b).  If a point c is to the left of the line determined by (a,b),
 * then the triple (a,b,c) forms a counterclockwise circuit... c is to the
 * left of (a,b) iff the area of the counterclockwise triangle A(a,b,c) is
 * positive"
 */
// Returns true if point c is to the left of the line directed from a to b
const bool Utility::left(const point<int> &a, const point <int> &b,
                         const point <int> &c) {
    return area2(a, b, c) > 0;
}
// p.29
// Returns true if point c is to the left of the line or colinear with the
// line directed from a to b
const bool Utility::leftOn(const point<int> &a, const point <int> &b,
                           const point <int> &c) {
    return area2(a, b, c) >= 0;
}
// p.29
// Returns true if point c is collinear with the line directed form a to b
const bool Utility::collinear(const point<int> &a, const point <int> &b,
                              const point <int> &c) {
    return area2(a, b, c) == 0;
}



// Returns true if the line segments (a,b) and (c,d) intersect "at a point
// interior to both"
// p.30
const bool Utility::intersectProp(const point<int> &a, const point<int> &b,
                                  const point<int> &c, const point<int> &d) {
    // Eliminate improper cases
    if (collinear(a,b,c) ||
        collinear(a,b,d) ||
        collinear(c,d,a) ||
        collinear(c,d,b)) {
        return false;
    }

    // ^ = exclusive or.  returns 1 if both operands are different.
    // If you draw a diagram, it's obvious that if c and d are on opposite sides
    // of (a,b) and a and b are on opposite sides of (c,d), the lines must
    // intersect
    return (left(a,b,c) ^ left(a,b,d))
        && (left(c,d,a) ^ left(c,d,b));
}

// get slope given x1,y1 and x2,y2
float Utility::getSlope(int x1, int y1, int x2, int y2) {
    return static_cast<float> (static_cast<float>(y2-y1)/
							   static_cast<float>(x2-x1));
}

// get length of line segment specified by (x1, y1), (x2, y2)
const float Utility::getLength(const int x1, const int y1,
                               const int x2, const int y2) {
    return getLength( static_cast<float>(x1),
					  static_cast<float>(y1),
					  static_cast<float>(x2),
					  static_cast<float>(y2) );
}

// get length of line segment specified by (x1, y1), (x2, y2)
const float Utility::getLength(const float x1, const float y1,
                               const float x2, const float y2) {
    return sqrt(pow(y2-y1,2)+pow(x2-x1,2));
}

// get length of line segment specified by (x1, y1), (x2, y2)
const double Utility::getLength(const double x1, const double y1,
                               const double x2, const double y2) {
    return sqrt(pow(y2-y1,2)+pow(x2-x1,2));
}

// get length of line segment specified by (x1, y1), (x2, y2)
const float Utility::getLength(const point <float> &p1,
                               const point <float> &p2) {
    return getLength(p1.x, p1.y, p2.x, p2.y);
}


const float Utility::getLength(const point <int> &p1,
                               const point <int> &p2) {
    return getLength( static_cast<float>(p1.x),
					  static_cast<float>(p1.y),
					  static_cast<float>(p2.x),
					  static_cast<float>(p2.y) );
}

// get length of line segment specified by (x1, y1), (x2, y2)
const float Utility::getLength2(const float x1, const float y1,
                                const float x2, const float y2) {
    return pow(y2-y1,2)+pow(x2-x1,2);
}

const float Utility::getLength2(const int x1, const int y1,
                               const int x2, const int y2) {
    return getLength2( static_cast<float>(x1),
					  static_cast<float>(y1),
					  static_cast<float>(x2),
					  static_cast<float>(y2) );
}


// get acute angle between two lines
// http://www.tpub.com/math2/5.htm

float Utility::getAngle(int x1, int y1, int x2, int y2) {
    if (x2 == x1) {
        if (y2 > y1) return -90.0;
        else         return 90.0;
    }
    // y1-y2 due to flipped coordinate system
    return TO_DEG * atan( static_cast<float>(y1-y2) /
						  static_cast<float>(x2-x1) );
}


// get y-coord with given x-coord, slopoe, and y-intercept
int Utility::getLineY(int x, float y_intercept, float slope) {
    return NBMath::ROUND( y_intercept + slope*static_cast<float>(x) );
}

// VERY IMPORTANT: Ensure that the slope is not infinity!
// get x-coord with given y-coord, slope, and y-intercept
int Utility::getLineX(int y, float y_intercept, float slope) {
    if (slope != 0) {
        return NBMath::ROUND( (static_cast<float>(y) - y_intercept) /
							  static_cast<float>(slope) );
    }
    return 0;
}

// get y-intercept given line slope plus a point the line goes through
float Utility::getInterceptY(int x1, int y1, float slope){
    return ( -slope*static_cast<float>(x1) + static_cast<float>(y1) );
}

// Returns the (x, y) coordinate where the two lines intersect,
// or (NO_INTERSECTION, NO_INTERSECTION)
// if they do not intersect.  (since we are only concerned  about
// intersections that appear on the screen, this will not be a problem)

const point <int> Utility::getIntersection(const point<int> line1Start,
                                           const point<int> line1End,
                                           const point<int> line2Start,
                                           const point<int> line2End) {
    int I_A1 = line1End.y-line1Start.y;
    int I_B1 = line1Start.x-line1End.x;
    int I_C1 = I_A1*line1Start.x+I_B1*line1Start.y;

    int I_A2 = line2End.y-line2Start.y;
    int I_B2 = line2Start.x-line2End.x;
    int I_C2 = I_A2*line2Start.x+I_B2*line2Start.y;


    int I_det = I_A1*I_B2 - I_A2*I_B1;
	/* cout << line1Start << "\t" <<  line1End << endl;
	   cout << line2Start << "\t" << line2End << endl;
	   cout << "I_A1 I_B1 I_C1 I_A2 I_B2 I_C2 I_DET" << endl;
	   cout << I_A1 << " " <<  I_B1 << " " << I_C1 << " " << I_A2
	   << " " << I_B2 << " " << I_C2 << " " << I_det << endl;
	*/

    point <int> intersection;
    if (I_det != 0) {
        intersection.x = static_cast<int>((I_B2*I_C1 - I_B1*I_C2)/I_det);
        intersection.y = static_cast<int>((I_A1*I_C2 - I_A2*I_C1)/I_det);
    }
    else {
        intersection.x = NO_INTERSECTION;
        intersection.y = NO_INTERSECTION;
    }

    return intersection;

}






template <typename T>
bool Utility::isElementInArray(const T elem, const T list[],
							   const int numElems) {
    for (int i = 0; i < numElems; i++) {
        if (elem == list[i])
            return true;
    }
    return false;
}

bool Utility::isElementInArray(const int elem, const int list[],
							   const int numElems) {
    for (int i = 0; i < numElems; i++) {
        if (elem == list[i])
            return true;
    }
    return false;
}




// Return the four corners of the bounding box surrounding a line
// Uses trig to determine how to shift things orthogonally and parallel
// to the line to determine the endpoints
// Future: Rewrite using parameterizations of the line?
// Keyword parameters:
// x1                x coordinate of an endpoint of the line
// y1                y coordinate of an endpoint of the line
// x2                x coordinate of second endpoint of the line
// y2                y coordinate of second endpoint of line
// orthoBuff         the number of pixels to extend the box perpendicularly
//                   to the line, i.e. the width of the box / 2.
//                   Must be positive
// paraBuff          the number of pixels to extend the box parallel
//                   to the line, i.e. extending the length of the box by
//                   this amount on either side
//                   Must be positive
//
// Return:
// thePoints        4 point <int> structs (having x and y values) representing
//                  the location of the corners of the bounding box.
//                  NOTE:  The method is set up in such a way that
//                  connecting thePoints[0] to [1], [1] to [2], [2] to [3],
//                  and [3] to [0] draws the correct shape on the screen.
//                  This allows the drawing to be easily done using a for
//                  loop and modular arithmetic, e.g.
//                  for (int i = 0; i < 4; i ++) {
//                           vision -> drawLine(thePoints[i].x, thePoints[i].y
//                           thePoints[(i + 1) % 4].x, thePoints[(i + 1) % 4].y
//                           COLOR)
//                  }

BoundingBox Utility::getBoundingBox(int x1, int y1, int x2, int y2,
                                    int orthoBuff,
                                    int paraBuff) {

    BoundingBox box;

    // Check legitimacy of arguments
    if (orthoBuff < 0 || paraBuff < 0) {
        cout << "Error: invalid arguments; both orthoBuff and paraBuff must be "
             << "positive ints" << endl;
        return box;
    }
    // calculations require x1 to be left most point, swap x1, y1 with x2, y2
    // if it's not
    if (x1 > x2) {
        int temp = x2;
        x2 = x1;
        x1 = temp;

        temp = y2;
        y2 = y1;
        y1 = temp;
    }

    // Use ternary operators to determine top and bottom y value.
    int top = (y2 > y1) ? y1: y2;
    int bottom = (y2 > y1) ? y2: y1;


    // vertical line
    if (x1 - x2 == 0) {
        // Easy case, just add or subtract orthoBuff to x values, since
        // 90 degrees from a vertical line is simply up and down.  The paraBuff
        // serves to lengthen the y values.  Note:  since our coordinate system
        // uses 0, 0 as top left corner, to increase the length of
        // the line to the top, you *subtract*, whereas to
        // extend on the bottom you *add*
        box.corners[0].x = x1 - orthoBuff;
        box.corners[0].y = top - paraBuff;

        box.corners[1].x = x1 + orthoBuff;
        box.corners[1].y = top - paraBuff;

        box.corners[2].x = x2 + orthoBuff;
        box.corners[2].y = bottom + paraBuff;

        box.corners[3].x = x2 - orthoBuff;
        box.corners[3].y = bottom + paraBuff;

        return box;

    }

    // Can divide with impunity now that we've removed chance of division by 0
    float slope = static_cast<float>((y2 - y1))/static_cast<float>((x2 - x1));

    // Horizontal line
    if (slope == 0) {

        // Now the paraBuff adds to the x values rather than y values because
        // the line is oriented horizontally

        box.corners[0].x = x1 - paraBuff;
        box.corners[0].y = y1 + orthoBuff;

        box.corners[1].x = x1 - paraBuff;
        box.corners[1].y = y1 - orthoBuff;

        box.corners[2].x = x2 + paraBuff;
        box.corners[2].y = y2 - orthoBuff;

        box.corners[3].x = x2 + paraBuff;
        box.corners[3].y = y2 + orthoBuff;

        return box;

    }

    // This is the most complicated part.  Basically, we need to break down
    // the slanted line into its x and y components in order to figure out
    // how much to add in x and y direction.  It's fairly simple to do that
    // with just paraBuff (i.e., to extend a line into space), but in order
    // to extend in the orthogonal direction we need to use the orthogonal
    // slope.

    float alpha = atan(slope);
    float betaX = static_cast<float>(paraBuff) * cos(alpha);
    float betaY = static_cast<float>(paraBuff) * sin(alpha);

    float orthoSlope = -1.0f / slope;

    float theta = atan(orthoSlope);
    float deltaX = static_cast<float>(orthoBuff) * cos(theta);
    float deltaY = static_cast<float>(orthoBuff) * sin(theta);

    box.corners[0].x = x1 + static_cast<int>(deltaX - betaX);
    box.corners[0].y = y1 + static_cast<int>(deltaY - betaY);

    box.corners[1].x = x1 + static_cast<int>(-deltaX - betaX);
    box.corners[1].y = y1 + static_cast<int>(-deltaY - betaY);

    box.corners[2].x = x2 + static_cast<int>(-deltaX + betaX);
    box.corners[2].y = y2 + static_cast<int>(-deltaY + betaY);

    box.corners[3].x = x2 + static_cast<int>(deltaX + betaX);
    box.corners[3].y = y2 + static_cast<int>(deltaY + betaY);

    return box;

}

// Determine whether a vertical line segment intersects a line segment
// Keyword parameters:
// plumbTop           the (x,y) coordinate of the top of the plumb line
// plumbBottom        the (x,y) coordinate of the bottom of the plumb line;
//                    for our purposes this will always be IMAGE_HEIGHT
// line1start         the (x,y) coordinate of one of the endpoints of the line
// line1end           the (x,y) coordinate of the second of the endpoints of
//                    the line.
// Returns (NO_INTERSECTION, NO_INTERSECTION) if no
// intersection, else (x, y) where x is x coord of
// intersection point, y is y coord.
pair<int, int> Utility::plumbIntersection(point <int> plumbTop,
                                          point <int> plumbBottom,
                                          point <int> line1start,
                                          point <int> line1end) {

    // Use ternary operation to determine the left, right, and bottom value
    int line1Left = (line1start.x < line1end.x) ? line1start.x : line1end.x;
    int line1Right = (line1start.x > line1end.x) ? line1start.x : line1end.x;
    int line1Bottom = (line1start.y > line1end.y) ? line1start.y : line1end.y;

    pair <int, int> intersection;
    intersection.first = intersection.second = NO_INTERSECTION;

    // plumbline lies to right or left of endpoints of line; no intersection
    if (plumbTop.x > line1Right || plumbTop.x < line1Left) {
        return intersection;
    }
    // plumbline starts below the lowest part of line
    else if (plumbTop.y>line1Bottom) {
        return intersection;
    }

    // vertical line
    if (line1start.x - line1end.x == 0) {
        // We'll count it as an intersection only if they have the same x value
        // (i.e. they run into each other going down the screen)
        if (plumbTop.x == line1start.x) {
            intersection.first = plumbTop.x;
            intersection.second = line1Bottom;
        }
        return intersection;
    }

    // easy cases out of way, have to calculate the y value of where the
    // intersection point would be
    // Will not divide by 0 here since we checked for vertical line already.
    float slope = static_cast<float> (line1end.y - line1start.y) /
        static_cast<float> (line1end.x - line1start.x);

    float intercept = static_cast<float>(line1end.y) -
		slope * static_cast<float>(line1end.x);

    // Determine the y value of line at x value of plumbline
    float y = slope * static_cast<float>(plumbTop.x) + intercept;

    if (y >= plumbTop.y && y <= plumbBottom.y) {
        intersection.first = plumbTop.x;
        intersection.second = static_cast<int>(y);
    }
    // if y weren't in the range of the plumb line,
    // then return NO_INTERSECTION, NO_INTERSECTION.
    return intersection;
}





// This method is meant to take a point on a line, and find what distance
// that point is away from the start (x1, x2) of the line.
// We parameterize the line such that x and y are functions of one
// variable t. Then we figure out what t gives us the corner's
// x coordinate. When t = 0, x = x1; when t = lineLength, x = x2;
// Since this relies on parametrization, we could end up with infinite slope.
// For better accuracy, we use x to find t when the line is less than 45 degs
// from horizontal and y otherwise.

float Utility::findLinePointDistanceFromStart(const point <int> &p,
                                              const point<int> &lineStart,
                                              const point<int> &lineEnd,
                                              const float length) {
    if ( abs(lineEnd.x - lineStart.x) > abs(lineEnd.y - lineStart.y) )
        return length * static_cast<float>(p.x - lineStart.x) /
            static_cast<float>(lineEnd.x - lineStart.x);
    else
        return length * static_cast<float>(p.y - lineStart.y) /
            static_cast<float>(lineEnd.y - lineStart.y);
}

/*
 * Any point on a line can be represented by a single value, t1, when the
 * line has been parameterized in such a way that x and y depend on a new
 * variable t.  Given such a t1 we can calculate where along the line segment
 * the point lies.  We parameterize our line such that when t = 0, x = x1 and
 * y = y1, and when t = length of line, x = x2 and y = y2.  Thus if t < 0 the
 * point lies "before" the first end point and if t > length of line, the
 * point lies "after" the second end point.
 *
 * This method determines whether a given t value lies in the "middle" of the
 * line (not too close to either end point)
 *
 * @param t1 the value for which the line reaches the point in question
 * @param length the length of the line
 */
// @TODO: think of a better name for this
const bool Utility::tValueInMiddleOfLine(const float t1, const float length,
                                         const float minExtendDistance) {
    return t1 > minExtendDistance && t1 < length - minExtendDistance;
}

/*
  License to Use

  Copyright (c) 1970-2003, Wm. Randolph Franklin

  Permission is hereby granted, free of charge, to any person
  obtaining a copy of this software and associated documentation files
  (the "Software"), to deal in the Software without restriction,
  including without limitation the rights to use, copy, modify, merge,
  publish, distribute, sublicense, and/or sell copies of the Software,
  and to permit persons to whom the Software is furnished to do so,
  subject to the following conditions:

  1. Redistributions of source code must retain the above copyright
  notice, this list of conditions and the following disclaimers.
  2. Redistributions in binary form must reproduce the above copyright
  notice in the documentation and/or other materials provided with the
  distribution.  3. The name of W. Randolph Franklin may not be used
  to endorse or promote products derived from this Software without
  specific prior written permission.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
  ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
  CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
  http://www.ecse.rpi.edu/Homepages/wrf/Research/Short_Notes/pnpoly.html
*/
int pnpoly(int nvert, float *vertx, float *verty, float testx, float testy)
{
    int i, j, c = 0;
    for (i = 0, j = nvert-1; i < nvert; j = i++) {
        if ( ((verty[i]>testy) != (verty[j]>testy)) &&
             (testx < (vertx[j]-vertx[i]) * (testy-verty[i])
              / (verty[j]-verty[i]) + vertx[i]) )
            c = !c;
    }
    return c;
}

bool Utility::boxContainsPoint(BoundingBox box, int x, int y) {
    float xCoords[] = { static_cast<float>(box.corners[0].x),
                        static_cast<float>(box.corners[1].x),
                        static_cast<float>(box.corners[2].x),
                        static_cast<float>(box.corners[3].x) };

    float yCoords[] = { static_cast<float>(box.corners[0].y),
                        static_cast<float>(box.corners[1].y),
                        static_cast<float>(box.corners[2].y),
                        static_cast<float>(box.corners[3].y) };
    // pnpoly returns 1 iff point is within the polygon described
    return static_cast<bool>(pnpoly(4, xCoords, yCoords,
                                    static_cast<float>(x),
                                    static_cast<float>(y)));
}


// Returns whether or not both entries in the pair are legitimate, i.e.
// not our NO_INTERSECTION value
bool Utility::isLegitIntersection(int x, int y) {
    return x != NO_INTERSECTION && y != NO_INTERSECTION;
}

bool Utility::isPointOnScreen(int x, int y) {
    if (x >= 0 && x < IMAGE_WIDTH && y >= 0 && y < IMAGE_HEIGHT) {
        return true;
    }
    return false;
}

bool Utility::isPointOnScreen(point<int> p) {
    return isPointOnScreen(p.x, p.y);
}

}
}
