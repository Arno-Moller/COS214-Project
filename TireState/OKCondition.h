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
        OKCondition(Tire* tires); // constructor that takes in a tire object 
        ~OKCondition();//destructor
        bool handle();//method to check if you should pit stop or not 
        void changeTireState();//method tochange the state of the tires 
};

#endif