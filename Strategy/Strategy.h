#ifndef STRATEGY_H
#define STRATEGY_H

#include <iostream>
#include <stdio.h>

using namespace std;
///strategy participant of the Strategy design pattern 
class Strategy
{
public:
    Strategy()  {}; ///constructor 


    /**
    * Abstract interface to execture the strategy of the way the driver wants to race. 
    * @return string that gives information about the tires given the strategy that is used.
    */
    virtual string execute() = 0;
    virtual string type() = 0;
};



#endif // STRATEGY_H