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
