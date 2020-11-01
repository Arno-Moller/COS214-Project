#include <iostream>

#ifndef NinetyDegreeTurn_h
#define NinetyDegreeTurn_h

#include "TrackSection.h"

using namespace std;

class NinetyDegreeTurn : public TrackSection
{
    public:
        NinetyDegreeTurn(int, int);
        string getName();
        int getRiskValue();
        int getDistance();

    private:
        string name;
        int riskValue;
        int distance;
};
#endif
