#include "OKCondition.h"

OKCondition::OKCondition()
{
	cout << "OK Condition" << endl;
}

OKCondition::OKCondition(Tire* tires): TireState(tires) 
{
	cout << "OK Condition" << endl;
}

OKCondition::~OKCondition()
{
	delete tires;
}

void OKCondition::handle(Tire* t)
{
	if(t->getWear() > 60)
		t->setState(new BadCondition());
}

void OKCondition::changeTireState() 
{
	TireState* bad = new BadCondition();
	tires->setState(bad);
}
