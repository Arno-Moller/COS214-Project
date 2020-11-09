#include "RaceCar.h"

RaceCar::RaceCar()
{
    
}

RaceCar::~RaceCar()
{
    delete strategy;
    delete pitCrew;
    delete compound;
}

void RaceCar::request()
{

}

void RaceCar::addPart(RaceCar *car)
{

}

list<RaceCar*> RaceCar::getCarParts() 
{
    list<RaceCar*> temp;
    return temp;
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

Strategy* RaceCar::getStrategy() const
{
    return this->strategy;
}

void RaceCar::setStrategy(Strategy* strat) 
{   
    if (changedStrat != true)
    {   
        changedStrat = true;
        
        newStrat = "";

        if (strategy != nullptr && getDriverName() != "" && strategy->type() != strat->type() && print == true)
        {   
            oldStrat = strategy->type();
            newStrat = strat->type();
            // cout1 << "\t\tThe Strategy have been changed from " << strategy->type() << " to " << strat->type()<< endl;
        }
        delete strategy;
        this->strategy = strat;
    }
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

bool RaceCar::strategyChanged() 
{
    return changedStrat;
}

string RaceCar::getName() 
{
    return "";
}

void RaceCar::setName(string name) 
{
    
}

int RaceCar::getPoints() 
{
    return points;
}

void RaceCar::setPoints(int points) 
{
    this->points = points;
}

int RaceCar::getCarPoints() 
{
    return points;
}

void RaceCar::setCarPoints(int points) 
{
    this->points = points;
}

