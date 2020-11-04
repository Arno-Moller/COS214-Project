#ifndef TIRE_H
#define TIRE_H

#include <iostream>

#include "RaceCar.h"
#include "GoodCondition.h"

//~ class TireState;

using namespace std;

//The context participant of the State design Pattern 
class Tire: public RaceCar
{
    public:
        Tire(); // efault constructor 
        Tire(string type); // Constructor to set 
        ~Tire();//destructor
        void degrade();// degrades the tires
        void setState(TireState* tState);//sets the state of the tires

        void setType(string type);// sets the type of the tires 
        string getType()const; // returns the type of the tires
        void setGrip(int grip);// sets the grip of the tires
        int getGrip()const; // returns the grip of the tires
        void setWear(float wear);// sets the wear 
        float getWear()const;// returns the wear of the tires
	void setRate(float grip);// sets the rate for the tires 
        float getRate()const; // get the rate at wich the tires degrade

    protected:
        Tire(TireState* tState, string type);//constructor taking in a tire state and a type of tire 
        TireState*  getState();// returns the state of the tires. 
    
    private:
        TireState* state; // The state of the tires object to check the tires condition 
        string type; // The type of tires
        int grip; // the grip of the tires 
        float wear; 		//100%
	float degradeRate;	//rate at which the tires degrade
};

//~ #include "TireState.h"
//~ #include "GoodCondition.h"

#endif