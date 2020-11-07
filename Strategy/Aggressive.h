#ifndef AGGRESIVE_H
#define AGGRESIVE_H

#include "Strategy.h"

using namespace std;
///Concrete Strategy Participant of the Strategy design pattern 
class Aggresive: public Strategy
{
public:
    Aggresive();///Constructor
    ~Aggresive();///Destructor 

    /**
    * Execute the strategy of the way the driver wants to race. 
    * @return string that gives information about the tires given the strategy that is used.
    */
    string execute();
    string type();
};

#endif // AGGRESIVE_H