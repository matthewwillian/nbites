#ifndef ConcreteCorner_h_defined
#define ConcreteCorner_h_defined

namespace man {
namespace vision {

	class ConcreteCorner;

}
}

#include <ostream>
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>

#include "FieldConstants.h"
#include "ConcreteLine.h"
#include "ConcreteLandmark.h"
#include "NBMath.h"

#include "VisionField.pb.h"


namespace man {
namespace vision {

    typedef ::messages::VisualCorner::corner_id cornerID;
	static const cornerID L_INNER_CORNER = ::messages::VisualCorner_corner_id_L_INNER_CORNER;
	static const cornerID L_OUTER_CORNER = ::messages::VisualCorner_corner_id_L_OUTER_CORNER;
	static const cornerID T_CORNER = ::messages::VisualCorner_corner_id_T_CORNER;
	static const cornerID CENTER_CIRCLE = ::messages::VisualCorner_corner_id_CENTER_CIRCLE;
	static const cornerID BLUE_GOAL_T = ::messages::VisualCorner_corner_id_BLUE_GOAL_T;
	static const cornerID YELLOW_GOAL_T = ::messages::VisualCorner_corner_id_YELLOW_GOAL_T;
	static const cornerID BLUE_GOAL_RIGHT_L_OR_YELLOW_GOAL_LEFT_L = 
		::messages::VisualCorner_corner_id_BLUE_GOAL_RIGHT_L_OR_YELLOW_GOAL_LEFT_L;
	static const cornerID BLUE_GOAL_LEFT_L_OR_YELLOW_GOAL_RIGHT_L = 
		::messages::VisualCorner_corner_id_BLUE_GOAL_LEFT_L_OR_YELLOW_GOAL_RIGHT_L;
	static const cornerID BLUE_CORNER_TOP_L_OR_YELLOW_CORNER_BOTTOM_L = 
		::messages::VisualCorner_corner_id_BLUE_CORNER_TOP_L_OR_YELLOW_CORNER_BOTTOM_L;
	static const cornerID BLUE_CORNER_BOTTOM_L_OR_YELLOW_CORNER_TOP_L = 
		::messages::VisualCorner_corner_id_BLUE_CORNER_BOTTOM_L_OR_YELLOW_CORNER_TOP_L;
	static const cornerID CORNER_INNER_L = ::messages::VisualCorner_corner_id_CORNER_INNER_L;
	static const cornerID GOAL_BOX_INNER_L = ::messages::VisualCorner_corner_id_GOAL_BOX_INNER_L;
	static const cornerID BLUE_GOAL_OUTER_L = ::messages::VisualCorner_corner_id_BLUE_GOAL_OUTER_L;
	static const cornerID YELLOW_GOAL_OUTER_L = ::messages::VisualCorner_corner_id_YELLOW_GOAL_OUTER_L;
	static const cornerID CENTER_T = ::messages::VisualCorner_corner_id_CENTER_T;
	static const cornerID BLUE_CORNER_TOP_L = ::messages::VisualCorner_corner_id_BLUE_CORNER_TOP_L;
	static const cornerID BLUE_CORNER_BOTTOM_L = 
		::messages::VisualCorner_corner_id_BLUE_CORNER_BOTTOM_L;
	static const cornerID BLUE_GOAL_LEFT_T = ::messages::VisualCorner_corner_id_BLUE_GOAL_LEFT_T;
	static const cornerID BLUE_GOAL_RIGHT_T = ::messages::VisualCorner_corner_id_BLUE_GOAL_RIGHT_T;
	static const cornerID BLUE_GOAL_LEFT_L = ::messages::VisualCorner_corner_id_BLUE_GOAL_LEFT_L;
	static const cornerID BLUE_GOAL_RIGHT_L = ::messages::VisualCorner_corner_id_BLUE_GOAL_RIGHT_L;
	static const cornerID CENTER_BOTTOM_T = ::messages::VisualCorner_corner_id_CENTER_BOTTOM_T;
	static const cornerID CENTER_TOP_T = ::messages::VisualCorner_corner_id_CENTER_TOP_T;
	static const cornerID YELLOW_CORNER_BOTTOM_L = 
		::messages::VisualCorner_corner_id_YELLOW_CORNER_BOTTOM_L;
	static const cornerID YELLOW_CORNER_TOP_L = ::messages::VisualCorner_corner_id_YELLOW_CORNER_TOP_L;
	static const cornerID YELLOW_GOAL_LEFT_T = ::messages::VisualCorner_corner_id_YELLOW_GOAL_LEFT_T;
	static const cornerID YELLOW_GOAL_RIGHT_T = ::messages::VisualCorner_corner_id_YELLOW_GOAL_RIGHT_T;
	static const cornerID YELLOW_GOAL_LEFT_L = ::messages::VisualCorner_corner_id_YELLOW_GOAL_LEFT_L;
	static const cornerID YELLOW_GOAL_RIGHT_L = ::messages::VisualCorner_corner_id_YELLOW_GOAL_RIGHT_L;
	static const cornerID CORNER_NO_IDEA_ID = ::messages::VisualCorner_corner_id_CORNER_NO_IDEA_ID;
	static const cornerID TOP_CC = ::messages::VisualCorner_corner_id_TOP_CC;
	static const cornerID BOTTOM_CC = ::messages::VisualCorner_corner_id_BOTTOM_CC;

    typedef ::messages::VisualCorner::shape shape;
	static const shape UNKNOWN = ::messages::VisualCorner_shape_UNKNOWN;
	static const shape INNER_L = ::messages::VisualCorner_shape_INNER_L;
	static const shape OUTER_L = ::messages::VisualCorner_shape_OUTER_L;
	static const shape T = ::messages::VisualCorner_shape_T;
	static const shape CIRCLE = ::messages::VisualCorner_shape_CIRCLE;
	static const shape GOAL_L = ::messages::VisualCorner_shape_GOAL_L;
	static const shape CORNER_L = ::messages::VisualCorner_shape_CORNER_L;
	static const shape LEFT_GOAL_L = ::messages::VisualCorner_shape_LEFT_GOAL_L;
	static const shape RIGHT_GOAL_L = ::messages::VisualCorner_shape_RIGHT_GOAL_L;
	static const shape RIGHT_GOAL_CORNER = ::messages::VisualCorner_shape_RIGHT_GOAL_CORNER;
	static const shape LEFT_GOAL_CORNER = ::messages::VisualCorner_shape_LEFT_GOAL_CORNER;
	static const shape GOAL_T = ::messages::VisualCorner_shape_GOAL_T;
	static const shape SIDE_T = ::messages::VisualCorner_shape_SIDE_T;
	static const shape LEFT_GOAL_T = ::messages::VisualCorner_shape_LEFT_GOAL_T;
	static const shape RIGHT_GOAL_T = ::messages::VisualCorner_shape_RIGHT_GOAL_T;
	static const shape YELLOW_GOAL_BOTTOM = ::messages::VisualCorner_shape_YELLOW_GOAL_BOTTOM;
	static const shape YELLOW_GOAL_TOP = ::messages::VisualCorner_shape_YELLOW_GOAL_TOP;
	static const shape BLUE_GOAL_BOTTOM = ::messages::VisualCorner_shape_BLUE_GOAL_BOTTOM;
	static const shape BLUE_GOAL_TOP = ::messages::VisualCorner_shape_BLUE_GOAL_TOP;
	static const shape LEFT_GOAL_YELLOW_L = ::messages::VisualCorner_shape_LEFT_GOAL_YELLOW_L;
	static const shape LEFT_GOAL_BLUE_L = ::messages::VisualCorner_shape_LEFT_GOAL_BLUE_L;
	static const shape RIGHT_GOAL_YELLOW_L = ::messages::VisualCorner_shape_RIGHT_GOAL_YELLOW_L;
	static const shape RIGHT_GOAL_BLUE_L = ::messages::VisualCorner_shape_RIGHT_GOAL_BLUE_L;
	static const shape RIGHT_GOAL_YELLOW_T = ::messages::VisualCorner_shape_RIGHT_GOAL_YELLOW_T;
	static const shape LEFT_GOAL_YELLOW_T = ::messages::VisualCorner_shape_LEFT_GOAL_YELLOW_T;
	static const shape RIGHT_GOAL_BLUE_T = ::messages::VisualCorner_shape_RIGHT_GOAL_BLUE_T;
	static const shape LEFT_GOAL_BLUE_T = ::messages::VisualCorner_shape_LEFT_GOAL_BLUE_T;
	static const shape CENTER_T_TOP = ::messages::VisualCorner_shape_CENTER_T_TOP;
	static const shape CENTER_T_BOTTOM = ::messages::VisualCorner_shape_CENTER_T_BOTTOM;
	static const shape CENTER_CIRCLE_TOP = ::messages::VisualCorner_shape_CENTER_CIRCLE_TOP;
	static const shape CENTER_CIRCLE_BOTTOM = ::messages::VisualCorner_shape_CENTER_CIRCLE_BOTTOM;


class ConcreteCorner : public ConcreteLandmark {
    /* Constructors are private because no one should ever have to create more
     * concrete corners. All of them are defined as constant static members of
     * this class.
     */
private:
    ConcreteCorner(const float fieldX, const float fieldY,
                   const float fieldAngle, const cornerID _id);
    ConcreteCorner(const float _fieldX,
                   const float _fieldY,
                   const float fieldAngle,
                   const ConcreteLine& _l1,
                   const ConcreteLine& _l2,
                   const cornerID _id);

    // copy constructor
    ConcreteCorner(const ConcreteCorner&);

public: // Constants
    static const unsigned int NUM_L_CORNERS = 8;
	static const unsigned int NUM_L_GOAL_CORNERS = 4;
	static const unsigned int NUM_L_FOUR_CORNERS = 4;
	static const unsigned int NUM_T_GOAL_CORNERS = 4;
    static const unsigned int NUM_L_LEFT_GOAL_CORNERS = 2;
    static const unsigned int NUM_L_RIGHT_GOAL_CORNERS = 2;
    static const unsigned int NUM_L_LEFT_CORNERS = 2;
    static const unsigned int NUM_L_RIGHT_CORNERS = 2;
    static const unsigned int NUM_T_RIGHT_CORNERS = 2;
    static const unsigned int NUM_T_LEFT_CORNERS = 2;
	static const unsigned int NUM_T_SIDE_CORNERS = 2;
    static const unsigned int NUM_T_CORNERS = 6;
    static const unsigned int NUM_CC_CORNERS = 2;
    static const unsigned int NUM_CORNERS = (NUM_L_CORNERS +
											 NUM_T_CORNERS +
											 NUM_CC_CORNERS);
    static const unsigned int NUM_YELLOW_GOAL_CORNERS = 4;
    static const unsigned int NUM_BLUE_GOAL_CORNERS = 4;
    static const unsigned int NUM_GOAL_CORNERS = (NUM_YELLOW_GOAL_CORNERS +
												  NUM_BLUE_GOAL_CORNERS);
    static const unsigned int NUM_BLUE_GOAL_T_CORNERS = 2;
    static const unsigned int NUM_YELLOW_GOAL_T_CORNERS = 2;

public:
    // destructor
    virtual ~ConcreteCorner();

    friend std::ostream& operator<< (std::ostream &o, const ConcreteCorner &c)
        {
            return o << c.toString();
        }

    bool operator== (const ConcreteCorner& secondCorner) const
    {
        return id == secondCorner.getID();
    }

    ////////////////////////////////////////////////////////////
    // GETTERS
    ////////////////////////////////////////////////////////////
    const cornerID getID() const { return id; }

    float getFieldAngle() const { return fieldAngle; }

    virtual const std::string toString() const;

    static const std::vector <const ConcreteCorner*>&
    getPossibleCorners(shape corner_type, shape secondary_type);

    const std::vector<const ConcreteLine*> getLines() const {
        return lines;
    }

//     // Private methods
// private:
public:
    static const shape inferCornerType(const cornerID id);
    void assignTCornerLines();
    bool isLineInCorner(const ConcreteLine* line) const;

public:
    static const ConcreteCorner& blue_corner_top_l();
    static const ConcreteCorner& blue_corner_bottom_l();
    static const ConcreteCorner& blue_goal_left_t();
    static const ConcreteCorner& blue_goal_right_t();
    static const ConcreteCorner& blue_goal_left_l();
    static const ConcreteCorner& blue_goal_right_l();
    static const ConcreteCorner& center_top_t();
    static const ConcreteCorner& center_bottom_t();
    static const ConcreteCorner& yellow_corner_bottom_l();
    static const ConcreteCorner& yellow_corner_top_l();
    static const ConcreteCorner& yellow_goal_left_t();
    static const ConcreteCorner& yellow_goal_right_t();
    static const ConcreteCorner& yellow_goal_left_l();
    static const ConcreteCorner& yellow_goal_right_l();
    static const ConcreteCorner& top_cc();
    static const ConcreteCorner& bottom_cc();
    static const ConcreteCorner& fake_cc();

    static const std::string getShapeString(shape s);
    static const std::string cornerIDToString(const cornerID _id);
    static const ConcreteCorner* concreteCornerList[NUM_CORNERS];

    const ConcreteLine* getTBar() const { return tBar; }
    const ConcreteLine* getTStem() const { return tStem; }

public:
    static const std::vector <const ConcreteCorner*>& concreteCorners();
    static const std::vector <const ConcreteCorner*>& lCorners();
    static const std::vector <const ConcreteCorner*>& lGoalCorners();
    static const std::vector <const ConcreteCorner*>& rightGoalCorners();
    static const std::vector <const ConcreteCorner*>& leftGoalCorners();
    static const std::vector <const ConcreteCorner*>& fourCorners();
    static const std::vector <const ConcreteCorner*>& leftLCorners();
    static const std::vector <const ConcreteCorner*>& rightLCorners();
    static const std::vector <const ConcreteCorner*>& rightTCorners();
    static const std::vector <const ConcreteCorner*>& leftTCorners();
    static const std::vector <const ConcreteCorner*>& tCorners();
    static const std::vector <const ConcreteCorner*>& tGoalCorners();
    static const std::vector <const ConcreteCorner*>& tSideCorners();
    static const std::vector <const ConcreteCorner*>& ccCorners();
    static const std::vector <const ConcreteCorner*>& rightBlueLCorner();
    static const std::vector <const ConcreteCorner*>& rightYellowLCorner();
    static const std::vector <const ConcreteCorner*>& leftBlueLCorner();
    static const std::vector <const ConcreteCorner*>& leftYellowLCorner();
    static const std::vector <const ConcreteCorner*>& yellowBottom();
    static const std::vector <const ConcreteCorner*>& yellowTop();
    static const std::vector <const ConcreteCorner*>& blueBottom();
    static const std::vector <const ConcreteCorner*>& blueTop();

    static const std::vector <const ConcreteCorner*>& yellowGoalCorners();
    static const std::vector <const ConcreteCorner*>& blueGoalCorners();

    static const std::vector <const ConcreteCorner*>& yellowGoalTCorners();
    static const std::vector <const ConcreteCorner*>& blueGoalTCorners();
    static const std::vector <const ConcreteCorner*>& rightBlueTCorner();
    static const std::vector <const ConcreteCorner*>& leftBlueTCorner();
    static const std::vector <const ConcreteCorner*>& rightYellowTCorner();
    static const std::vector <const ConcreteCorner*>& leftYellowTCorner();
    static const std::vector <const ConcreteCorner*>& centerBottomCorner();
    static const std::vector <const ConcreteCorner*>& centerTopCorner();
    static const std::vector <const ConcreteCorner*>& centerCircleTop();
    static const std::vector <const ConcreteCorner*>& centerCircleBottom();

private: // Instance variables recording location on field and identifier

    // Angle which the left leg (L Corner) or T-Stem (T Corner) mkaes
    // with the Y-Axis ("north")
    float fieldAngle;

    cornerID id;
    shape cornerType;

    const ConcreteLine * line1;
    const ConcreteLine * line2;
    std::vector<const ConcreteLine*> lines;

    const ConcreteLine * tBar;
    const ConcreteLine * tStem;

};

class CornerOfField : public std::unary_function<const ConcreteCorner*, bool> {
public:

    explicit CornerOfField() {}
    bool operator() (const ConcreteCorner *c) const {
        return
            (*c == ConcreteCorner::blue_corner_top_l() ||
             *c == ConcreteCorner::blue_corner_bottom_l() ||
             *c == ConcreteCorner::yellow_corner_bottom_l() ||
             *c == ConcreteCorner::yellow_corner_top_l());

    }
};

class InList : public std::unary_function<const ConcreteCorner*, bool> {
    const std::list<const ConcreteCorner *> possibilities;

public:
    explicit InList(const std::list<const ConcreteCorner *> &_possibilities) :
        possibilities(_possibilities) { }

    bool operator() (const ConcreteCorner *c) const {

        // find will return possibilities.end() if c is not in the list.
        return find(possibilities.begin(), possibilities.end(), c) !=
            possibilities.end();
    }
};

}
}

#endif
