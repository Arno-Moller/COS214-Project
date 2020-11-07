#include "GoodCondition.h"

GoodCondition::GoodCondition()
{
	
}

GoodCondition::GoodCondition(Tire* tires): TireState(tires) 
{

}

GoodCondition::~GoodCondition()
{
	delete tires;
}

bool GoodCondition::handle()
{
	return false;
}

void GoodCondition::changeTireState() 
{	

	if (tires->getWear() >= 30)
	{
		TireState* ok = new OKCondition();
		tires->setState(ok);
	}
}
