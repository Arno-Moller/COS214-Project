#include "BadCondition.h"

BadCondition::BadCondition()
{
<<<<<<< HEAD

=======
	cout << "BAD Condition" << endl;
}

BadCondition::BadCondition(Tire* tires): TireState(tires)  
{
	cout << "BAD Condition" << endl;
>>>>>>> theo-branch
}

BadCondition::~BadCondition()
{
<<<<<<< HEAD

}

void BadCondition::handle(Tire* t)
{
    //broken.......
=======
	delete tires;
}

bool BadCondition::handle()
{
	if (tires->getWear() >= 100)
	{
		return true; // needs to pit
	}
	
	return false;

}

void BadCondition::changeTireState() 
{
	TireState* good = new GoodCondition();
	tires->setState(good);
>>>>>>> theo-branch
}
