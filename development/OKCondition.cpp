#include "OKCondition.h"

OKCondition::OKCondition()
{
<<<<<<< HEAD

=======
	cout << "OK Condition" << endl;
}

OKCondition::OKCondition(Tire* tires): TireState(tires) 
{
	cout << "OK Condition" << endl;
>>>>>>> theo-branch
}

OKCondition::~OKCondition()
{
<<<<<<< HEAD

}

void OKCondition::handle(Tire* t)
{
    t->setState(new BadCondition());
=======
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
>>>>>>> theo-branch
}
