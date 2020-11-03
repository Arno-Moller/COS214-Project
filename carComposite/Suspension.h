#ifndef SUSPENSION_H
#define SUSPENSION_H

#include <iostream>
#include "RaceCar.h"

using namespace std;

class Suspension : public RaceCar
{
    public:
        Suspension();
        ~Suspension();
        void degrade();
};

#endif