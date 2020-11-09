#ifndef AGGRESSIVE_H
#define AGGRESSIVE_H

#include "Strategy.h"

using namespace std;
///Concrete Strategy Participant of the Strategy design pattern 
class Aggressive: public Strategy
{
public:
    Aggressive();///Constructor
    ~Aggressive();///Destructor 

    /**
    * Execute the strategy of the way the driver wants to race. 
    * @return string that gives information about the tires given the strategy that is used.
    */
    string execute();

    /**
    * Returns the way the driver wants to race 
    * @return string that displays the drivers startegy. 
    */
    string type();
};

#endif // AGGRESIVE_H