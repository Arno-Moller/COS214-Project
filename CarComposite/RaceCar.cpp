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
    degrade(); // check net of hy actually degrade call van tires
    
	// int chanceStrategyOdds = rand() % 100;

    // if (chanceStrategyOdds >= 75)
    // {
    //     int nextStrategy = rand() % 3;
    //     switch (nextStrategy)
    //     {
    //     case 0:
    //         setStrategy(new Sensible());
    //         break;

    //     case 1:
    //         setStrategy(new Cautious());
    //         break;
            
    //     case 2:
    //         setStrategy(new Aggresive());
    //         break;
        
    //     default:
    //         break;
    //     }
    // }
    
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
    return this->compound->getGrip();
}
