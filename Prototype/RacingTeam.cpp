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
