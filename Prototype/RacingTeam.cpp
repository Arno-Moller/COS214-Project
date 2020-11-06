#include "RacingTeam.h"

RacingTeam::RacingTeam() 
{
    
}

RacingTeam::RacingTeam(RacingTeam& racingTeam) 
{
    this->car1 = new RaceCar(*racingTeam.getCarOne());
    this->car2 = new RaceCar(*racingTeam.getCarTwo());
}

RacingTeam::RacingTeam(string tireCompound): Team(tireCompound)
{
    
}

RacingTeam::~RacingTeam() 
{
    delete this->car1;
    delete this->car2;
}

RaceCar* Team::getCarOne() 
{
	return this->car1;
}

RaceCar* Team::getCarTwo() 
{
	return this->car2;
}

void Team::setCarOne(RaceCar* car1) 
{
	this->car1 = car1;
}

void Team::setCarTwo(RaceCar* car2) 
{
	this->car2 = car2;
}

Team* RacingTeam::clone() 
{
    return new RacingTeam(*this);
}

int RacingTeam::getTeamPoints() 
{
    return teamPoints;
}

void RacingTeam::setTeamPoints() 
{
    teamPoints = getCarOne()->getPoints() + getCarTwo()->getPoints();

}

string RacingTeam::getTeamName() 
{
    return teamName;
}

void RacingTeam::setTeamName(string name) 
{
    teamName = name;
}
