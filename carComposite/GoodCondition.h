#ifndef GOODCONDITION_H
#define GOODCONDITION_H

#include <iostream>
#include "TireState.h"
<<<<<<< HEAD

using namespace std;

//Concrete State
class GoodCondition : public TireState
{
    public:
        GoodCondition();
        ~GoodCondition();
        virtual void handle(Tire* t);
=======
#include "OKCondition.h"

using namespace std;

//the concrete state participant of the State design Pattern 
class GoodCondition : public TireState
{
    public:
        GoodCondition();// constructor
        GoodCondition(Tire* tires);
        ~GoodCondition();//destructor
        bool handle();//method to handle the change of the state of the tires
        void changeTireState();
>>>>>>> theo-branch

};

#endif