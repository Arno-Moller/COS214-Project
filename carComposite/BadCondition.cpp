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

void BadCondition::handle(Tire* t)
{
	if(t->getWear() >= 100)
		cout << "Need to pit" << endl;
}

void BadCondition::changeTireState() 
{
	TireState* good = new GoodCondition();
	tires->setState(good);
}
