#ifndef WING_H
#define WING_H

#include <iostream>
#include "RaceCar.h"

using namespace std;

class Wing : public RaceCar
{
    public:
        Wing();
        ~Wing();
        void operation();

};

#endif