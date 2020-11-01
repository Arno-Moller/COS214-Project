#ifndef TrackSection_h
#define TrackSection_h

#include <iostream>

using namespace std;

class TrackSection
{
    public:
        TrackSection();
        virtual string getName() = 0;
        virtual int getRiskValue() = 0;
        virtual int getDistance() = 0;

    private:
};
#endif


