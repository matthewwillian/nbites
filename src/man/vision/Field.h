#ifndef Field_h_DEFINED
#define Field_h_DEFINED

#include <boost/shared_ptr.hpp>

namespace man {
namespace vision {
	class Field;  // forward reference
}
}

#include "Threshold.h"
#include "NaoPose.h"

namespace man {
namespace vision {

// constants for Graham scanning to find convex hull
static const int RUNSIZE = 8;
static const int SCANSIZE = 10;
static const int SCANNOISE = 2;
static const int HULLS = IMAGE_WIDTH / SCANSIZE + 1;


class Field
{
    friend class Vision;
public:
    Field(Vision* vis, Threshold* thr);
    virtual ~Field() {}

    // main methods
    int findGreenHorizon(int pH, float sl);
    void findConvexHull(int pH);
    void initialScanForTopGreenPoints(int pH);
    void findTopEdges(int M);
    int getInitialHorizonEstimate(int pH);
    int getImprovedEstimate(int pH);
	int horizonAt(int x);
	int occludingHorizonAt(int x);
	float distanceToHorizon(int x, int y);
	int ccw(point<int> p1, point<int> p2, point<int> p3);
    int * getTopEdge(){
        return topEdge;
    }
	int getPeak() {return peak;}
	int findSlant();

    // scan operations
    int yProject(int startx, int starty, int newy);
    int yProject(point <int> point, int newy);
    int xProject(int startx, int starty, int newx);
    int xProject(point <int> point, int newx);

    void bestShot(VisualFieldObject * left, VisualFieldObject * right,
                  VisualCrossbar * mid, int color);
    void openDirection(int h, NaoPose *p);
    void drawLess(int x, int y, int c);
    void drawMore(int x, int y, int c);

#ifdef OFFLINE
	void setDebugHorizon(bool debug) {debugHorizon = debug;}
	void setDebugFieldEdge(bool debug) {debugFieldEdge = debug;}
#endif

private:

    // class pointers
    Vision* vision;
	Threshold* thresh;

	// the field horizon
	int horizon;
	int poseHorizon;
	float slope;
	int peak;

    bool shoot[IMAGE_WIDTH];
	int  topEdge[IMAGE_WIDTH+1];
	int topBlock[IMAGE_WIDTH+1];
    point<int> convex[HULLS];
	point<int> blockages[HULLS];
#ifdef OFFLINE
    bool debugHorizon;
    bool debugFieldEdge;
	bool debugDrawFieldEdge;
#else
    static const bool debugHorizon = false;
    static const bool debugFieldEdge = false;
	static const bool debugDrawFieldEdge = false;
#endif
};

}
}

#endif // Field_h_DEFINED
