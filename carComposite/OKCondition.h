#ifndef OKCONDITION_H
#define OKCONDITION_H

#include <iostream>
#include "TireState.h"
<<<<<<< HEAD

using namespace std;

//Concrete State
class OKCondition : public TireState
{
    public:
        OKCondition();
        ~OKCondition();
        virtual void handle(Tire* t);
=======
#include "BadCondition.h"

using namespace std;

//The concrete state participant of the State design Pattern 
class OKCondition: public TireState
{
    public:
        OKCondition();//constructor 
        OKCondition(Tire* tires);
        ~OKCondition();//destructor
        bool handle();//method to handle the change of the state of the tires
        void changeTireState();
>>>>>>> theo-branch
};

#endif