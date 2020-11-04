#include "GoodCondition.h"

GoodCondition::GoodCondition()
{
	cout << "Good Condition" << endl;
}

GoodCondition::GoodCondition(Tire* tires): TireState(tires) 
{
	cout << "Good Condition" << endl;
}

GoodCondition::~GoodCondition()
{
	delete tires;
}

void GoodCondition::handle(Tire* t)
{
	if(t->getWear() > 30)
		t->setState(new OKCondition());
}

void GoodCondition::changeTireState() 
{
	TireState* ok = new OKCondition();
	tires->setState(ok);
}
