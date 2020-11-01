#include <iostream>

#ifndef Hairpin_h
#define Hairpin_h

#include "TrackSection.h"

using namespace std;

class Hairpin : public TrackSection
{
    public:
        Hairpin(int, int);
        string getName();
        int getRiskValue();
        int getDistance();

    private:
        string name;
        int riskValue;
        int distance;
};
#endif
