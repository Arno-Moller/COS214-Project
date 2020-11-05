#ifndef TEAM_H
#define TEAM_H

#include <iostream>
#include "../CarComposite/CarBuilder.h"
#include "../CarComposite/RaceCar.h"

using namespace std;
// prototype participant of the prototype design pattern 
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

		virtual RaceCar* getCarOne(); // returns the first race car of the team 
		virtual RaceCar* getCarTwo(); // returns the second race car of the team 
		virtual void setCarOne(RaceCar* car1); // sets the first race car of the team 
		virtual void setCarTwo(RaceCar* car2); // sets the seconds race car of the team 

		virtual Team* clone() = 0; // abstract interface to clone a team 
		virtual int getTeamPoints() = 0;
		virtual void setTeamPoints() = 0;
		virtual string getTeamName() = 0;
		virtual void setTeamName(string name) = 0;


    protected:
		CarBuilder* builder; // the builder object to build the cars 
		RaceCar* car1;// the first car that the car has 
		RaceCar* car2;//the second car that the team has 
		string tireCompound; // the tire compound 
		int teamPoints;
		string teamName;
        
};

#endif