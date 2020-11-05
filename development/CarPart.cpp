#include "CarPart.h"

<<<<<<< HEAD
CarPart::CarPart()
{

=======
CarPart::CarPart(): RaceCar()
{
	
>>>>>>> theo-branch
}

CarPart::~CarPart()
{
<<<<<<< HEAD

}

void CarPart::addPart(RaceCar *car)
{

}

void CarPart::removePart(RaceCar *car)
{

=======
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
>>>>>>> theo-branch
}

RaceCar *CarPart::getPart()
{
<<<<<<< HEAD
    return nullptr;
=======
    return this;
}

void CarPart::lap()
{
	for(list<RaceCar*>::iterator it = parts.begin(); it != parts.end(); ++it)
	{
		(*it)->degrade();
	}
>>>>>>> theo-branch
}
