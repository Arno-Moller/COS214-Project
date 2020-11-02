#ifndef TrackSection_h
#define TrackSection_h

#include <iostream>

using namespace std;

class TrackSection
{
    public:
        string getName();
        int getRiskValue();
        int getDistance();

    protected:
        string name;
        int riskValue;
        int distance;
};
#endif


