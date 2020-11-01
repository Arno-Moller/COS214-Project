#ifndef GOODCONDITION_H
#define GOODCONDITION_H

#include <iostream>
#include "TireState.h"

using namespace std;

//Concrete State
class GoodCondition : public TireState
{
    public:
        GoodCondition();
        ~GoodCondition();
        virtual void handle(Tire* t);

};

#endif