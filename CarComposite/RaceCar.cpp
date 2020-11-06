#include "RaceCar.h"

RaceCar::RaceCar()
{

}

RaceCar::~RaceCar()
{

}

void RaceCar::request()
{

}

void RaceCar::addPart(RaceCar *car)
{

}

RaceCar *RaceCar::getChild()
{
    return nullptr;
}

void RaceCar::lap()
{
	cout << "lapping" << endl;
}

void RaceCar::degrade()
{
    
}

void RaceCar::addPitcrew(PitStop* pitcrew) 
{
    this->pitCrew = pitCrew;
}

void RaceCar::removePitCrew() 
{   
    delete pitCrew;
}

void RaceCar::notify() 
{
    this->pitCrew->update();
}

int RaceCar::getPoints() 
{
    return points;
}

void RaceCar::setPoints(int points) 
{
    this->points = points;
}

Strategy* RaceCar::getStrategy() const
{
    return this->strategy;
}

void RaceCar::setStrategy(Strategy* strat) 
{
    this->strategy = strat;
}

PitStop* RaceCar::getPitStops() const
{
    return this->pitCrew;
}

void RaceCar::setPitStop(PitStop* pitstop) 
{
    this->pitCrew = pitstop;
}
