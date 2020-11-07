#include "OKCondition.h"

OKCondition::OKCondition()
{
	
}

OKCondition::OKCondition(Tire* tires): TireState(tires) 
{
	
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
	if (tires->getWear() >= 80)
	{
		TireState* bad = new BadCondition();
		tires->setState(bad);
	}
}
