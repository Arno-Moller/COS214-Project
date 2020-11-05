#ifndef TIRESTATE_H
#define TIRESTATE_H

#include <iostream>
#include <string>

<<<<<<< HEAD
#include "OKCondition.h"
#include "GoodCondition.h"
#include "BadCondition.h"

using namespace std;
#include "Tire.h";

//State
class TireState
{
    public:
        TireState();
        virtual ~TireState();
        virtual void handle(Tire* types) = 0;
};

=======
class Tire;

using namespace std;

//The state participant of the State design pattern 
class TireState
{   
    public:
        TireState();//constructor
        TireState(Tire* tires);//constructor 
        virtual ~TireState(); // destructor 
        virtual bool handle() = 0;// abstract interface to check the state of the tires
        virtual void changeTireState() = 0;

    protected:
        Tire* tires;
};

#include "Tire.h"


>>>>>>> theo-branch
#endif