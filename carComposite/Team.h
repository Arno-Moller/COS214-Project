#ifndef TEAM_H
#define TEAM_H

#include <iostream>
#include "CarBuilder.h"

using namespace std;

///Director
class Team
{
    public:
        Team();
        Team(string tireCompound);
        ~Team();
	void buildCar();
	void lap();
	void setTireCompound(string tireCompound);
    
    private:
	CarBuilder* builder;
	RaceCar* car1;
	RaceCar* car2;
	string tireCompound;
        
};

#endif