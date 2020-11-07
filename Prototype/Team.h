#ifndef TEAM_H
#define TEAM_H

#include <iostream>

#include "../Memento/TeamState.h"
#include "../Memento/TeamStateCaretaker.h"
#include "../CarComposite/CarBuilder.h"
#include "../CarComposite/RaceCar.h"


using namespace std;
/// prototype participant of the prototype design pattern 
///The director participant of the Builder Design Pattern 
class Memento;

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

		/**
        * Abstract interface method that returns the second car of the team 
		* @return RaceCar object of the second car of the team 
        */
		virtual RaceCar* getCarTwo() = 0; 

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

	
		virtual void setTeamPoints() = 0;
		virtual string getTeamName() = 0;
		virtual void setTeamName(string name) = 0;

		virtual Memento* createMemento() = 0;
		virtual void loadMemento(Memento* m) = 0;


    protected:
		CarBuilder* builder1; /**<  the builder object to build the cars  */
		CarBuilder* builder2; /**<  the builder object to build the cars  */  
		RaceCar* car1;/**< the first car that the car has */  
		RaceCar* car2;/**< the second car that the team has  */ 
		string tireCompound;/**< the tire compound  */  // 
		int teamPoints;/**< the points of the team  */
		string teamName;/**< the teams name   */
    
};

#include "../Memento/Memento.h"

#endif