#ifndef TIRE_H
#define TIRE_H

#include <iostream>
#include <stdio.h>
#include <ctime>

#include "RaceCar.h"
#include "../TireCompoundStrategy/SoftCompound.h"
#include "../TireCompoundStrategy/MediumCompound.h"
#include "../TireCompoundStrategy/HardCompound.h"
#include "../TireState/GoodCondition.h"
#include "../TireState/TireState.h"
#include "../Observer/ChangeTires.h"

using namespace std;

//The context participant of the State design Pattern 
class Tire: public RaceCar
{
    public:
        Tire(); // efault constructor 
        Tire(TireState* tState, TireCompound* type);//constructor taking in a tire state and a type of tire 
        Tire(string type); // Constructor to set 
        ~Tire();//destructor
        RaceCar* clone();
        TireState*  getState();// returns the state of the tires. 
        void setState(TireState* tState);//sets the state of the tires

        void setType(string type);
        void setType(TireCompound* type);

        void lap();
        void degrade();// degrades the tires

        int getGrip();
        void setGrip(int grip);
        int getWear();
        void setWear(int wear);
        double getRate();

        string getNextTireCompound();

    private:
        TireState* state = nullptr; // The state of the tires object to check the tires condition 
        string currentCompound = "";
};

//~ #include "TireState.h"
//~ #include "GoodCondition.h"

#endif