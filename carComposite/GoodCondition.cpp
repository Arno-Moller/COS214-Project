#include "GoodCondition.h"

GoodCondition::GoodCondition()
{

}

GoodCondition::~GoodCondition()
{

}

void GoodCondition::handle(Tire* t)
{
    t->setState(new OKCondition());
}
