#ifndef CARPART_H
#define CARPART_H

#include <iostream>
#include <list>
#include "RaceCar.h"

using namespace std;

class CarPart: public RaceCar
{
    public:
        CarPart();
        ~CarPart();
        void addPart(RaceCar* part);
        void removePart(RaceCar* part);
        RaceCar* getPart();
	void lap();
    
    private:
        list<RaceCar*> parts;

};

#endif