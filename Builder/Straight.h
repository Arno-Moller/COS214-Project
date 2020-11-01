#include <iostream>

#ifndef Straight_h
#define Straight_h

#include "TrackSection.h"

using namespace std;

class Straight : public TrackSection
{
    public:
        Straight(int, int);
        string getName();
        int getRiskValue();
        int getDistance();

    private:
        string name;
        int riskValue;
        int distance;
};
#endif
