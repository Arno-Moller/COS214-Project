#ifndef TIRESTATE_H
#define TIRESTATE_H

#include <iostream>
#include <string>

class Tire;

using namespace std;

//State
class TireState
{
    public:
        TireState();
        virtual ~TireState();
        virtual void handle(Tire* types) = 0;
};

#include "Tire.h"

#endif