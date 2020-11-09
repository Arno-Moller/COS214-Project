#ifndef CAUTIOUS_H
#define CAUTIOUS_H

#include "Strategy.h"

using namespace std;
///Concrete Strategy participant of the strategy design Pattern. 
class Cautious: public Strategy
{
public:
    Cautious();///constructor
    ~Cautious();///destructor

    /**
    * Execute the strategy of the way the driver wants to race. 
    * @return string that gives information about the tires given the strategy that is used.
    */
    string execute();

    /**
    * Returns the way the driver wants to race 
    * @return string that displays the drivers strategy. 
    */
    string type();
};

#endif // CAUTIOUS_H