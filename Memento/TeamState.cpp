#include "TeamState.h"

TeamState::TeamState(RaceCar* carOne, RaceCar* carTwo) 
{
    this->carOne = new RaceCar(*carOne); // gebruik raceCar copy constructor
    this->carTwo = new RaceCar(*carTwo); // gebruik raceCar copy constructor
}

TeamState::~TeamState() 
{
    delete carOne;
    delete carTwo;
}

TeamState* TeamState::getTeamState() 
{
    return this;
}

RaceCar* TeamState::getCarOne() 
{
    return carOne;
}

RaceCar* TeamState::getCarTwo() 
{
    return carTwo;
}
