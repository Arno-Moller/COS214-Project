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
        GoodCondition(Tire* tires);
        ~GoodCondition();//destructor
        void handle(Tire* t);//method to handle the change of the state of the tires
        void changeTireState();

};

#endif