#include <iostream>

#ifndef SlightTurn_h
#define SlightTurn_h

#include "TrackSection.h"

using namespace std;

class SlightTurn : public TrackSection
{
    public:
        SlightTurn(int, int);
        string getName();
        int getRiskValue();
        int getDistance();

    private:
        string name;
        int riskValue;
        int distance;
};
#endif
