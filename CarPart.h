#ifndef CARPART_H
#define CARPART_H

#include <iostream>
<<<<<<< HEAD
#include "RaceCar.h"

using namespace std;

class CarPart
{
    public:
        CarPart();
        ~CarPart();
        void addPart(RaceCar* car);
        void removePart(RaceCar* car);
        RaceCar* getPart();
    private:
        RaceCar* children;
=======
#include <list>
#include "RaceCar.h"

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
    
    private:
        list<RaceCar*> parts;// a list of all the Race Car parts
>>>>>>> theo-branch

};

#endif