#ifndef STRATEGY_H
#define STRATEGY_H

#include <iostream>
#include <stdio.h>

using namespace std;

class Strategy
{
public:
    Strategy();
    virtual ~Strategy() = 0;

    virtual string execute() = 0;
};

Strategy::Strategy() 
{
}

#endif // STRATEGY_H