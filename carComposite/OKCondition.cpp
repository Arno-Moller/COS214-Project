#include "OKCondition.h"

OKCondition::OKCondition()
{
	cout << "OK Condition" << endl;
}

OKCondition::~OKCondition()
{

}

void OKCondition::handle(Tire* t)
{
	if(t->getWear() > 60)
		t->setState(new BadCondition());
}
