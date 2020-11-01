#include "RacingTeam.h"

RacingTeam::RacingTeam() 
{
    
}

RacingTeam::RacingTeam(RacingTeam& racingTeam) 
{
    this->carOne = new RaceCar(*racingTeam.getCarOne());
    this->carTwo = new RaceCar(*racingTeam.getCarTwo());
}

RacingTeam::~RacingTeam() 
{
    delete this->carOne;
    delete this->carTwo;
}

Team* RacingTeam::clone() 
{
    return new RacingTeam(*this);
}
