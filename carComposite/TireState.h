#ifndef TIRESTATE_H
#define TIRESTATE_H

#include <iostream>
#include <string>

#include "OKCondition.h"
#include "GoodCondition.h"
#include "BadCondition.h"

using namespace std;
#include "Tire.h";

//State
class TireState
{
    public:
        TireState();
        virtual ~TireState();
        virtual void handle(Tire* types) = 0;
};

#endif