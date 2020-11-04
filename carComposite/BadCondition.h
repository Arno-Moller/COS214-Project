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
        void handle(Tire* t);
        void changeTireState();
};

#endif // BADCONDITION_H