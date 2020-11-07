#ifndef SENSIBLE_H
#define SENSIBLE_H


#include "Strategy.h"

using namespace std;
///Concrete Strategy Participant of the Strategy design pattern 
class Sensible: public Strategy
{
public:
    Sensible();///Constructor
    ~Sensible();///Destructor
    
    /**
    * Execute the strategy of the way the driver wants to race. 
    * @return string that gives information about the tires given the strategy that is used.
    */
    string execute();
};


#endif // SENSIBLE_H