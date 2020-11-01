#ifndef OKCONDITION_H
#define OKCONDITION_H

#include <iostream>
#include "TireState.h"

using namespace std;

//Concrete State
class OKCondition : public TireState
{
    public:
        OKCondition();
        ~OKCondition();
        virtual void handle(Tire* t);
};

#endif