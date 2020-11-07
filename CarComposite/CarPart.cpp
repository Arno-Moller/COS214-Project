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
	int chanceStrategyOdds = rand() % 100;

    if (chanceStrategyOdds >= 75)
    {
        int nextStrategy = rand() % 3;
        switch (nextStrategy)
        {
        case 0:
            setStrategy(new Sensible());
            break;

        case 1:
            setStrategy(new Cautious());
            break;
            
        case 2:
            setStrategy(new Aggresive());
            break;
        
        default:
            break;
        }
    }
	for(list<RaceCar*>::iterator it = parts.begin(); it != parts.end(); ++it)
	{
		(*it)->degrade();
	}
}

void CarPart::addCarTire(RaceCar* part) 
{
    tire = part;
}

int CarPart::getTireGrip() 
{   
    // cout << "grip " << tire->getCarTireGrip() <<endl;
    return tire->getCarTireGrip();
    // return 25;
}


