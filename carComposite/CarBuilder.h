#ifndef CARBUILDER_H
#define CARBUILDER_H

#include <iostream>
#include "RaceCarBuilder.h"

using namespace std;

class CarBuilder: public RaceCarBuilder
{
    public:
        CarBuilder();
        ~CarBuilder();
        RaceCar* buildCar();
        RaceCar* getResult();
};

#endif