#ifndef TEAM_H
#define TEAM_H

#include <iostream>
#include "../CarComposite/CarBuilder.h"
#include "../CarComposite/RaceCar.h"

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

		RaceCar* getCarOne(); // returns the first race car of the team 
		RaceCar* getCarTwo(); // returns the second race car of the team 
		void setCarOne(RaceCar* car1); // sets the first race car of the team 
		void setCarTwo(RaceCar* car2); // sets the seconds race car of the team 
    
    protected:
		CarBuilder* builder; // the builder object to build the cars 
		RaceCar* car1;// the first car that the car has 
		RaceCar* car2;//the second car that the team has 
		string tireCompound; // the tire compound 
        
};

#endif