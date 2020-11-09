#ifndef RACECARBUILDER_H
#define RACECARBUILDER_H

#include <iostream>
#include "RaceCar.h"

using namespace std;
//The Builder participant of The BUilder Design Pattern 
class RaceCarBuilder
{
    public:
        RaceCarBuilder();//Constructor 
        ~RaceCarBuilder();//Destructor
    
		virtual void addChassis() = 0;//abstact interface for the builder of the cars 
		virtual void addSuspension() = 0; // adds suspension to the Race Car 
		virtual void addWing() = 0; //adds wing to the Race Car
		virtual void addHub() = 0; // adds a hub to the Race car
		virtual void addEngine() = 0; // adds a Engine to the Race Car
		virtual void addTire(string) = 0; // adds Tires
		virtual RaceCar* getCar() = 0; // returns the Race CAr
    
};

#endif