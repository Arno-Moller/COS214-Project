#ifndef OKCONDITION_H
#define OKCONDITION_H

#include <iostream>
#include "TireState.h"
#include "BadCondition.h"

using namespace std;

///The concrete state participant of the State design Pattern 
class OKCondition: public TireState
{
    public:
        OKCondition();///constructor 
        ~OKCondition();///destructor
        bool handle(Tire* tire);///method to check if you should pit stop or not 
        void changeTireState(Tire* tire);///method tochange the state of the tires
        TireState* clone();
};  

#endif