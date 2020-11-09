#include <iostream>

#ifndef Straight_h
#define Straight_h

#include "TrackSection.h"

using namespace std;
///This is the leaf participant of the Composite Design Pattern 
class Straight : public TrackSection
{
    public:
    /**
     * @brief Construct a new Straight object
     * @param disnatce
     */
    Straight(int); 

    private:
        
};
#endif
