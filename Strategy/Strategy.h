#ifndef STRATEGY_H
#define STRATEGY_H

#include <iostream>
#include <stdio.h>

using namespace std;

class Strategy
{
public:
    Strategy()  {};

    virtual string execute() = 0;
};



#endif // STRATEGY_H