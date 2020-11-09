#ifndef WING_H
#define WING_H

#include <iostream>
#include "RaceCar.h"

using namespace std;
///This is the leaf participant of the Composite design Pattern 
class Wing : public RaceCar
{
    public:
        Wing();///constructor

        ~Wing();/// destructor 

        /**
        * function that allows the wings to degrade during the race.  
        * 
        */
        void degrade();// how the wings degrade 

        /**
        * Clone function that returns a clone of the current Race Car 
        * @return a clone of the the Race Car
        */
        RaceCar* clone();

};

#endif