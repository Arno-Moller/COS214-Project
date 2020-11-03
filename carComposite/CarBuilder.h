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

class CarBuilder: public RaceCarBuilder
{
    public:
        CarBuilder();
        ~CarBuilder();
    
        void addChassis();
	void addSuspension();
	void addWing();
	void addHub();
	void addEngine();
	void addTire(string compound);
    
	RaceCar* getCar();
    
	private:
		CarPart* car;
};

#endif