#ifndef TEAM_H
#define TEAM_H

#include <iostream>

// #include "TeamState.h"
// #include "TeamStateCaretaker.h"
#include "CarBuilder.h"
#include "RaceCar.h"
#include "CarPart.h"


using namespace std;
/// prototype participant of the prototype design pattern 
///The director participant of the Builder Design Pattern 
class Memento;
class TeamState;

class Team
{
    public:
        Team();/// default constructor 

		/**
        *  Constructor that sets the tire compound
        * @param tireCompound wether the tire is soft medium or hard 
        */
        Team(string tireCompound);

        ~Team();/// destructor 

		/**
        * Abstract interface Method that builds the car 
		* It adds all the elements to the car
        */
		virtual void buildCar() = 0; 

		/**
        * Abstract interface Method that allows both cars of the team to do laps 
        */
		virtual void lap() = 0; 

		/**
        * Abstract interface method that sets the tire Compound(soft , hard , medium)
		* @param tireCompound 
        */
		virtual void setTireCompound(string tireCompound) = 0;

        /**
        * Abstract interface method that returns the first car of the team 
		* @return RaceCar object of the first car of the team 
        */
		virtual RaceCar* getCarOne() = 0;
		
		virtual CarPart* getCarOnePart() = 0;
		/**
        * Abstract interface method that returns the second car of the team 
		* @return RaceCar object of the second car of the team 
        */
		virtual RaceCar* getCarTwo() = 0; 

		virtual CarPart* getCarTwoPart() = 0;
		/**
        * Abstract interface method that sets the first car of the team 
		* @return RaceCar object of the first car of the team 
        */
		virtual void setCarOne(RaceCar* car1) = 0; 

		/**
        * Abstract interface method that sets the second car of the team 
		* @return RaceCar object of the first car of the team 
        */
		virtual void setCarTwo(RaceCar* car2) = 0; 

        /**
        * Abstract interface method that clones the team 
		* @return Team object
        */
		virtual Team* clone() = 0; 

		/**
        * Abstract interface method that returns the teams points 
		* @return int amount of the points the team has made
        */
		virtual int getTeamPoints() = 0;

	    
		/**
        * Abstract interface method that sets the teams points 
        */
		virtual void setTeamPoints() = 0;

		/**
        * Abstract interface method that sets the teams points 
        */
		virtual void setTeamPoints(int p) = 0;

		/**
        * Abstract interface method that returns the teams name 
		* @return string of the teams name 
        */
		virtual string getTeamName() = 0;

		
		/**
        * Abstract interface method that sets the teams name
		* @param name of the team
        */
		virtual void setTeamName(string name) = 0;
        
		
		/**
        * Abstract interface method that creates a memento of the team 
		* @return Memento of the team 
        */
		virtual Memento* createMemento() = 0;

		
		/**
        * Abstract interface method that loads the memento that was previously stored and reinstates it
		* @return int amount of the points the team has made
        */
		virtual void loadMemento(Memento* m) = 0;


    protected:
		CarBuilder* builder1; /**<  the builder object to build the cars  */
		CarBuilder* builder2; /**<  the builder object to build the cars  */  
		RaceCar* car1;/**< the first car that the car has */  
		CarPart* car1Part;/**< the first car that the car has */  
		RaceCar* car2;/**< the second car that the team has  */ 
		CarPart* car2Part;/**< the first car that the car has */  
		string tireCompound;/**< the tire compound  */  // 
		int teamPoints = 0;/**< the points of the team  */
		string teamName;/**< the teams name   */
    
};

#include "Memento.h"
#include "TeamState.h"

#endif