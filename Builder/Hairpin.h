#include <iostream>

#ifndef Hairpin_h
#define Hairpin_h

#include "TrackSection.h"

using namespace std;
//This is the leaf participant of the Composite Design Pattern  
class Hairpin : public TrackSection
{
    public:
        Hairpin(int); // the distance of the hairpin you would like to add

    private:

};
#endif
