#ifndef TIRE_H
#define TIRE_H

#include <iostream>

#include "RaceCar.h"
#include "SoftCompound.h"
#include "MediumCompound.h"
#include "HardCompound.h"
#include "GoodCondition.h"

using namespace std;

//The context participant of the State design Pattern 
class Tire: public RaceCar
{
    public:
        Tire(); // efault constructor 
        Tire(TireState* tState, TireCompound* type);//constructor taking in a tire state and a type of tire 
        Tire(string type); // Constructor to set 
        ~Tire();//destructor
        TireState*  getState();// returns the state of the tires. 
        void setState(TireState* tState);//sets the state of the tires

        void setType(string type);
        void setType(TireCompound* type);

        void degrade();// degrades the tires

        int getGrip();
        void setGrip(int grip);
        int getWear();
        void setWear(int wear);
        int getRate();
        void setRate(int rate);
          

    private:
        TireState* state; // The state of the tires object to check the tires condition 
        TireCompound* compound; 
};

//~ #include "TireState.h"
//~ #include "GoodCondition.h"

#endif