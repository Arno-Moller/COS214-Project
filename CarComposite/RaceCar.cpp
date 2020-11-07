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
    
}

void RaceCar::degrade()
{
    
}

void RaceCar::addPitcrew(PitStop* pitcrew) 
{   
    // cout << "added pitcrew" << endl;s
    this->pitCrew = pitcrew;
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
    if (strategy != nullptr)
    {   
        cout << "The Strategy have been changed from " << strategy->type() << " to " << strat->type() << " on car " << getDriverName() << endl;
        // delete strategy;
        // strategy = nullptr;
    }
    
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

string RaceCar::getDriverName() 
{
    return driverName;
}

void RaceCar::setDriverName(string name) 
{
    this->driverName = name;
}

int RaceCar::getTireGrip() 
{
    return 0;
}

int RaceCar::getCarTireGrip() 
{
    return this->compound->getGrip();
}

bool RaceCar::carPitted() 
{
    return hasPitted;
}


