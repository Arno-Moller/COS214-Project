#include "GoodCondition.h"

GoodCondition::GoodCondition()
{
	cout << "Good Condition" << endl;
}

GoodCondition::~GoodCondition()
{

}

void GoodCondition::handle(Tire* t)
{
	if(t->getWear() > 30)
		t->setState(new OKCondition());
}
