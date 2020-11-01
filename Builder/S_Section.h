#include <iostream>

#ifndef S_Section_h
#define S_Section_h

#include "TrackSection.h"

using namespace std;

class S_Section : public TrackSection
{
    public:
        S_Section(int, int);
        string getName();
        int getRiskValue();
        int getDistance();

    private:
        string name;
        int riskValue;
        int distance;
};
#endif
