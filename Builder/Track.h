#include <iostream>
#include <map>
#include <cstring>
#include <list>
#include <iterator>

#include "TrackSection.h"

using namespace std;

#ifndef Track_h
#define Track_h

class Track
{
    public:
        Track();
        Track(string n);

        string getTrackName();
        int getTrackDistance();
        int getTrackRisk();

        void addSection(string, int, int);
        void showTrack();

    private:
        list <TrackSection> section;
        string trackName;
        int trackDistance;
        int trackRisk;
};
#endif
