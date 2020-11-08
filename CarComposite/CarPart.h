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
        CarPart(CarPart&);
        ~CarPart();//destructor 
        RaceCar* clone();

        void addPart(RaceCar* part);// adds a part to the race car 
        void removePart(RaceCar* part);// removes a part from the race car
        RaceCar* getPart(); // returns the race car 
        
        list<RaceCar*> getCarParts();
	    void lap();// does a lap 

        void addCarTire(RaceCar* part);
        RaceCar*  getCarTire();
        int getTireGrip();

        string getName();
        void setName(string name);

        int getPoints();
        void setPoints(int points);

        void setPrint(bool shouldItPrint);
        bool getPrint();

    protected:
        list<RaceCar*> parts;// a list of all the Race Car parts
        RaceCar* tire;

};

#endif