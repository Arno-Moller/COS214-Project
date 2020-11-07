#include "CarPart.h"

CarPart::CarPart(): RaceCar()
{   
    
}

CarPart::~CarPart()
{
	for(list<RaceCar*>::iterator it = parts.begin(); it != parts.end(); ++it)
	{
		delete *it;
	}
}

void CarPart::addPart(RaceCar *part)
{
	parts.push_back(part);
}

void CarPart::removePart(RaceCar *part)
{
	for(list<RaceCar*>::iterator it = parts.begin(); it != parts.end(); ++it)
	{
		delete *it;
	}
}

RaceCar *CarPart::getPart()
{
    return this;
}

void CarPart::lap()
{	
    tire->degrade();

	// for(list<RaceCar*>::iterator it = parts.begin(); it != parts.end(); ++it)
	// {
	// 	(*it)->degrade();
	// }
}

void CarPart::addCarTire(RaceCar* part) 
{
    tire = part;
}

int CarPart::getTireGrip() 
{    
    return tire->getCarTireGrip();
    // return 25;
}

string CarPart::getName() 
{
	return tire->getDriverName();
}

void CarPart::setName(string name) 
{
	tire->setDriverName(name);
}


