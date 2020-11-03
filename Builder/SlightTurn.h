#include <iostream>

#ifndef SlightTurn_h
#define SlightTurn_h

#include "TrackSection.h"

using namespace std;
 //This is the leaf participant of the Composite Design Pattern
class SlightTurn : public TrackSection
{
    public:
        SlightTurn(int);// the distance of a slight turn you would like to add

    private:

};
#endif
