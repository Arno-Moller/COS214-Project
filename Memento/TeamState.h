#ifndef TEAMSTATE_H
#define TEAMSTATE_H

#include "../CarComposite/RaceCar.h"
//????????
class TeamState
{
private:
    RaceCar* carOne; // the first car for he team 
    RaceCar* carTwo; // the second car for the team 
public:
    TeamState(RaceCar* carOne, RaceCar* carTwo); // constructor to initialize the state of the team 
    ~TeamState();//destructor

    TeamState* getTeamState();//returns the state of the team 

    RaceCar* getCarOne();//returns car one 
    RaceCar* getCarTwo(); // returns car two 
};



#endif // TeamState_H