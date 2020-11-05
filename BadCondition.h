#ifndef BADCONDITION_H
#define BADCONDITION_H

#include <iostream>
#include "TireState.h"
#include "GoodCondition.h"

using namespace std;

class BadCondition: public TireState
{
    public:
        BadCondition();
        BadCondition(Tire* tires);
        ~BadCondition();
        bool handle();
        void changeTireState();
};

#endif // BADCONDITION_H
