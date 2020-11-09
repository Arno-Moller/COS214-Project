#include "CarPart.h"

CarPart::CarPart(): RaceCar()
{   
    
}

CarPart::CarPart(CarPart& oldCar) 
{
	list<RaceCar*> tempParts = oldCar.getCarParts();
	for(list<RaceCar*>::iterator it = tempParts.begin(); it != tempParts.end(); ++it)
	{	
		addPart((*it)->clone());
	}
	
	addCarTire(oldCar.getCarTire()->clone());
	setName(oldCar.getName());
	setPoints(oldCar.getPoints());
	setPrint(oldCar.getPrint());
}

CarPart::~CarPart()
{
	for(list<RaceCar*>::iterator it = parts.begin(); it != parts.end(); ++it)
	{
		delete *it;
	}
}

RaceCar* CarPart::clone() 
{	
	return new CarPart(*this);
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

list<RaceCar*> CarPart::getCarParts() 
{
	return parts;
}

void CarPart::lap()
{	
    tire->degrade();
}

void CarPart::degrade() 
{
	for(list<RaceCar*>::iterator it = parts.begin(); it != parts.end(); ++it)
	{
		(*it)->degrade();
	}
}


void CarPart::addCarTire(RaceCar* part) 
{
    tire = part;
}

RaceCar* CarPart::getCarTire() 
{
	return tire;
}

int CarPart::getTireGrip() 
{    
    return tire->getCarTireGrip();
}

string CarPart::getName() 
{
	return tire->getDriverName();
}

void CarPart::setName(string name) 
{
	tire->setDriverName(name);
}

int CarPart::getPoints() 
{
	return tire->getCarPoints();
}

void CarPart::setPoints(int points) 
{
	tire->setCarPoints(points);
}

void CarPart::setPrint(bool shouldItPrint) 
{
	tire->print = shouldItPrint;
}

bool CarPart::getPrint() 
{
	return tire->print;
}


