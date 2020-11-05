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

bool OKCondition::handle()
{
	return false;
}

void OKCondition::changeTireState() 
{
	TireState* bad = new BadCondition();
	tires->setState(bad);
}
