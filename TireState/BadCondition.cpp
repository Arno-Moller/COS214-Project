#include "BadCondition.h"

BadCondition::BadCondition()
{
	cout << "BAD Condition" << endl;
}

BadCondition::BadCondition(Tire* tires): TireState(tires)  
{
	cout << "BAD Condition" << endl;
}

BadCondition::~BadCondition()
{
	delete tires;
}

bool BadCondition::handle()
{
	if (tires->getWear() >= 100)
	{
		return true; // needs to pit
	}
	return false;

}

void BadCondition::changeTireState() 
{	
	if (tires->getWear() >= 100)
	{
		TireState* good = new GoodCondition();
		tires->setState(good);
	}
}
