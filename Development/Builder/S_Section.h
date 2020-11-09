#include <iostream>

#ifndef S_Section_h
#define S_Section_h

#include "TrackSection.h"

using namespace std;
//This is the leaf participant of the Composite Design Pattern
class S_Section : public TrackSection
{
    public:
    /**
     * @brief Construct a new s section object
     * @param distance
     */
        S_Section(int);


    private:

};
#endif
