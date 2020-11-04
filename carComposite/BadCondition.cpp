#include "BadCondition.h"

BadCondition::BadCondition()
{
	cout << "BAD Condition" << endl;
}

BadCondition::~BadCondition()
{

}

void BadCondition::handle(Tire* t)
{
	if(t->getWear() >= 100)
		cout << "Need to pit" << endl;
}
