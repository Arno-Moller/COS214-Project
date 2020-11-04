#ifndef OKCONDITION_H
#define OKCONDITION_H

#include <iostream>
#include "TireState.h"
#include "BadCondition.h"

using namespace std;

//The concrete state participant of the State design Pattern 
class OKCondition: public TireState
{
    public:
        OKCondition();//constructor 
        ~OKCondition();//destructor
        virtual void handle(Tire* t);//method to handle the change of the state of the tires
};

#endif