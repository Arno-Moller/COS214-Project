#include <iostream>

#ifndef NinetyDegreeTurn_h
#define NinetyDegreeTurn_h

#include "TrackSection.h"

using namespace std;
//This is the leaf participant of the Composite Design Pattern
class NinetyDegreeTurn : public TrackSection
{
    public:
        
        /**
         * @brief Construct a new Ninety Degree Turn object
         * @param distance
         */
        NinetyDegreeTurn(int);// the distance of the ninety degree turn you would like to add

    private:

};
#endif
