#include <iostream>

#ifndef TrackSection_h
#define TrackSection_h

using namespace std;

class TrackSection
{
    public:
        TrackSection(string, int, int);
        string getName();
        int getRiskValue();
        int getDistance();

    private:
        string name;
        int riskValue;
        int distance;
};
#endif
