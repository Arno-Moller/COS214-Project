#ifndef CHASSIE_H
#define CHASSIE_H

#include <iostream>
#include "RaceCar.h"

using namespace std;
//leaf participant of the Composite Design Pattern 
class Chassie : public RaceCar
{
    public:
        Chassie();//constructor 
        ~Chassie();//destructor 

        /**
        * Clone function that returns a clone of the current Race Car 
        * @return a clone of the the Race Car
        */
        RaceCar* clone();
        void degrade();//degrade method 

};

#endif