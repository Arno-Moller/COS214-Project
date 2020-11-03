#ifndef CHASSIE_H
#define CHASSIE_H

#include <iostream>
#include "RaceCar.h"

using namespace std;

class Chassie : public RaceCar
{
    public:
        Chassie();
        ~Chassie();
        void degrade();

};

#endif