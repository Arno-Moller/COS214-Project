#include "GoodCondition.h"

GoodCondition::GoodCondition()
{
	
}

GoodCondition::~GoodCondition() 
{
	
}

bool GoodCondition::handle(Tire* tire)
{
	return false;
}

void GoodCondition::changeTireState(Tire* tire) 
{	
	if (tire->getWear() >= 30)
	{
		TireState* ok = new OKCondition();
		tire->setState(ok);
	}
}
