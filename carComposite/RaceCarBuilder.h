#ifndef RACECARBUILDER_H
#define RACECARBUILDER_H

#include <iostream>
#include "RaceCar.h"

using namespace std;

class RaceCarBuilder
{
    public:
        RaceCarBuilder();
        ~RaceCarBuilder();
    
	virtual void addChassis() = 0;
	virtual void addSuspension() = 0;
	virtual void addWing() = 0;
	virtual void addHub() = 0;
	virtual void addEngine() = 0;
    
	virtual RaceCar* getCar() = 0;
    
};

#endif