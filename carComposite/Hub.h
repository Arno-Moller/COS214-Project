#ifndef HUB_H
#define HUB_H

#include <iostream>
#include "RaceCar.h"

using namespace std;

class Hub : public RaceCar
{
    public:
        Hub();
        ~Hub();
        void operation();

};

#endif