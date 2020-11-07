#ifndef CARPART_H
#define CARPART_H

#include <iostream>
#include <list>
#include "RaceCar.h"
#include "Tire.h"

using namespace std;
//the composite participant of the Composite Design Pattern 
class CarPart: public RaceCar
{
    public:
        CarPart();//constructor 
        ~CarPart();//destructor 
        void addPart(RaceCar* part);// adds a part to the race car 
        void removePart(RaceCar* part);// removes a part from the race car 
        RaceCar* getPart(); // returns the race car 
	    void lap();// does a lap 

        void addCarTire(RaceCar* part);
        int getTireGrip();
        string getName();
        void setName(string name);
        
    private:
        list<RaceCar*> parts;// a list of all the Race Car parts
        RaceCar* tire;
};

#endif