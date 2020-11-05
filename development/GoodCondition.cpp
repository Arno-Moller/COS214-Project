#include "GoodCondition.h"

GoodCondition::GoodCondition()
{
<<<<<<< HEAD

=======
	cout << "Good Condition" << endl;
}

GoodCondition::GoodCondition(Tire* tires): TireState(tires) 
{
	cout << "Good Condition" << endl;
>>>>>>> theo-branch
}

GoodCondition::~GoodCondition()
{
<<<<<<< HEAD

}

void GoodCondition::handle(Tire* t)
{
    t->setState(new OKCondition());
=======
	delete tires;
}

bool GoodCondition::handle()
{
	return false;
}

void GoodCondition::changeTireState() 
{
	TireState* ok = new OKCondition();
	tires->setState(ok);
>>>>>>> theo-branch
}
