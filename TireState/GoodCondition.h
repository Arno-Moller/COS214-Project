#ifndef GOODCONDITION_H
#define GOODCONDITION_H

#include <iostream>
#include "TireState.h"
#include "OKCondition.h"

using namespace std;

//the concrete state participant of the State design Pattern 
class GoodCondition : public TireState
{
    public:
        GoodCondition();// constructor
        GoodCondition(Tire* tires);// constructor that takes in a tire object 
        ~GoodCondition();//destructor
        bool handle();//method to check if a pit stop is needed 
        void changeTireState();// method to change tire state 

};

#endif