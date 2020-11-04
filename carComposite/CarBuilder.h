#ifndef CARBUILDER_H
#define CARBUILDER_H

#include <iostream>
#include "RaceCarBuilder.h"
#include "Tire.h"
#include "Chassie.h"
#include "Engine.h"
#include "Hub.h"
#include "Suspension.h"
#include "Wing.h"
#include "CarPart.h"

using namespace std;
//this class is the Concrete Builder in the Builder design Pattern 
class CarBuilder: public RaceCarBuilder
{
    public:
        CarBuilder();// constructor 
        ~CarBuilder();// destructor 
    
        void addChassis();//adds a Chassis to the car 
	void addSuspension();// adds Suspension to the car 
	void addWing();// adds wing to the car 
	void addHub();// adds hub to the car 
	void addEngine();// adds engine to the car 
	void addTire(string compound);// adds tire to the car 
    
	RaceCar* getCar(); // returns the car 
    
	private:
		CarPart* car; // an object of the car 
};

#endif