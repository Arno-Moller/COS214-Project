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
        void degrade();//degrade method 

};

#endif