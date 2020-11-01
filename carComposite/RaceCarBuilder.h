#ifndef RACECARBUILDER_H
#define RACECARBUILDER_H

#include <iostream>
#include "RaceCar.h"

using namespace std;

class RaceCarBuilder
{
    public:
        RaceCarBuilder();
        ~RaceCarBuilder();
        RaceCar* buildeCar();
};

#endif