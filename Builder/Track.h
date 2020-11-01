#include <iostream>
#include <map>
#include <cstring>
#include <list>
#include <iterator>

#include "TrackSection.h"
#include "SlightTurn.h"
#include "Straight.h"
#include "S_Section.h"
#include "NinetyDegreeTurn.h"
#include "Hairpin.h"

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

        void addSection(TrackSection*);
        void showTrack();

    private:
        list <TrackSection> section;
        string trackName;
        int trackDistance;
        int trackRisk;
};
#endif
