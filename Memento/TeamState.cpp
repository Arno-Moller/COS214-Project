#include "TeamState.h"

TeamState::TeamState(RaceCar* car1, RaceCar* car2) 
{   
// 	this->carOne = new CarPart(*car1);
// 	this->carTwo = new CarPart(*car2);
}

TeamState::TeamState(Team* teams) 
{
    this->carOne = (new CarPart(*teams->getCarOnePart()))->getPart();
	this->carTwo = (new CarPart(*teams->getCarTwoPart()))->getPart();

    teamName = teams->getTeamName();
    points = teams->getTeamPoints();
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

string TeamState::getTeamName() 
{
    return teamName;
}

int TeamState::getTeamPoints() 
{
    return points;   
}
