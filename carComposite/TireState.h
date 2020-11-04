#ifndef TIRESTATE_H
#define TIRESTATE_H

#include <iostream>
#include <string>

class Tire;

using namespace std;

//The state participant of the State design pattern 
class TireState
{   
    public:
        TireState();//constructor
        TireState(Tire* tires);//constructor 
        virtual ~TireState(); // destructor 
        virtual void handle(Tire* types) = 0;// abstract interface to check the state of the tires
        virtual void changeTireState() = 0;

    protected:
        Tire* tires;
};

TireState::TireState(Tire* tires) 
{
    this->tires = tires;
}

#include "Tire.h"


#endif