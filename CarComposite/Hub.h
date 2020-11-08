#ifndef HUB_H
#define HUB_H

#include <iostream>
#include "RaceCar.h"

using namespace std;
//leaf participant of the Composite Design pattern 
class Hub : public RaceCar
{
    public:
        Hub();//constructor
        ~Hub();//destructor
        void degrade();//degrade method
        RaceCar* clone();

};

#endif