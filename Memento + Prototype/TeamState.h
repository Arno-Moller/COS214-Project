#ifndef TEAMSTATE_H
#define TEAMSTATE_H

#include "RaceCar.h"

class TeamState
{
private:
    RaceCar* carOne;
    RaceCar* carTwo;
public:
    TeamState(RaceCar* carOne, RaceCar* carTwo);
    ~TeamState();

    TeamState* getTeamState();

    RaceCar* getCarOne();
    RaceCar* getCarTwo();
};



#endif // TeamState_H