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
        BadCondition(Tire* tires);/// constructor that takes in a tire object
        ~BadCondition();///destructor
        bool handle();///method to check if you should pit stop or not
        void changeTireState();/// method to change tire state 
};

#endif // BADCONDITION_H
