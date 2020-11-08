#ifndef WING_H
#define WING_H

#include <iostream>
#include "RaceCar.h"

using namespace std;
//This is the leaf participant of the Composite design Pattern 
class Wing : public RaceCar
{
    public:
        Wing();//constructor 
        ~Wing();// destructor 
        void degrade();// how the wings degrade 
        RaceCar* clone();

};

#endif