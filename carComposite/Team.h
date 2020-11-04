#ifndef TEAM_H
#define TEAM_H

#include <iostream>
#include "CarBuilder.h"

using namespace std;

//The director participant of the Builder Design Pattern 
class Team
{
    public:
        Team();// default constructor 
        Team(string tireCompound);// constructor taking a tire compound object in 
        ~Team();// destructor 
	void buildCar(); // method to build a car 
	void lap(); // method to do a lap 
	void setTireCompound(string tireCompound);// set the tire compound 
    
    private:
	CarBuilder* builder; // the builder object to build the cars 
	RaceCar* car1;// the first car that the car has 
	RaceCar* car2;//the second car that the team has 
	string tireCompound; // the tire compound 
        
};

#endif