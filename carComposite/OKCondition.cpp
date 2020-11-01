#include "OKCondition.h"

OKCondition::OKCondition()
{

}

OKCondition::~OKCondition()
{

}

void OKCondition::handle(Tire* t)
{
    t->setState(new BadCondition());
}
