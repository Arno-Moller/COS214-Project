#ifndef BADCONDITION_H
#define BADCONDITION_H

#include <iostream>
#include "TireState.h"

using namespace std;

//Concrete State
class BadCondition : public TireState
{
    public:
        BadCondition();
        ~BadCondition();
        virtual void handle(Tire* t);
};

#endif