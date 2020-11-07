#include "BadCondition.h"

BadCondition::BadCondition()
{
	
}

BadCondition::~BadCondition() 
{
	
}


bool BadCondition::handle(Tire* tire)
{
	if (tire->getWear() >= 100)
	{
		return true; // needs to pit
	}
	return false;

}

void BadCondition::changeTireState(Tire* tire) 
{	
	if (tire->getWear() >= 100)
	{
		TireState* good = new GoodCondition();
		tire->setState(good);
	}
}
