#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include "RaceCar.h"

using namespace std;
// leaf participant of the Composite design Pattern 
class Engine : public RaceCar
{
    public:
        Engine();//constructor 
        ~Engine();//destructor
        void degrade();//degrade method 

};

#endif