#ifndef SUSPENSION_H
#define SUSPENSION_H

#include <iostream>
#include "RaceCar.h"

using namespace std;
// The leaf participant of the composite Design Pattern 
class Suspension : public RaceCar
{
    public:
        Suspension();//constructor 
        ~Suspension();//destructor
        void degrade();//degrade method 

        /**
        * Clone function that returns a clone of the current Race Car 
        * @return a clone of the the Race Car
        */
        RaceCar* clone();
};

#endif