#ifndef CARPART_H
#define CARPART_H

#include <iostream>
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

};

#endif