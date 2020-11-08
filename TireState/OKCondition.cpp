#include "OKCondition.h"

OKCondition::OKCondition()
{
	
}

OKCondition::~OKCondition() 
{
	
}

bool OKCondition::handle(Tire* tire)
{
	return false;
}

void OKCondition::changeTireState(Tire* tire) 
{	
	if (tire->getWear() >= 80)
	{
		TireState* bad = new BadCondition();
		tire->setState(bad);
	}
}

TireState* OKCondition::clone() 
{
	return new OKCondition();
}

