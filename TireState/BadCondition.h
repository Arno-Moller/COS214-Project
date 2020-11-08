#ifndef BADCONDITION_H
#define BADCONDITION_H

#include <iostream>
#include "TireState.h"
#include "GoodCondition.h"

using namespace std;
///The concrete state participant of the State design Pattern 
class BadCondition: public TireState
{
    public:
        BadCondition();/// constructor
        ~BadCondition();///destructor
        bool handle(Tire* tire);///method to check if you should pit stop or not
        void changeTireState(Tire* tire);/// method to change tire state 
        TireState* clone();
};

#endif // BADCONDITION_H
