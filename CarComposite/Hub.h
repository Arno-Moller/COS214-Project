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

        /**
        * Clone function that returns a clone of the current Race Car 
        * @return a clone of the the Race Car
        */
        RaceCar* clone();

};

#endif