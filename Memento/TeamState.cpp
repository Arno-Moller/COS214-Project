#include "TeamState.h"

TeamState::TeamState(RaceCar* car1, RaceCar* car2) 
{   
	this->carOne = car1->clone();
	this->carTwo = car2->clone();
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
