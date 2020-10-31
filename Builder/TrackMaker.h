#include <iostream>
#include <map>
#include <cstring>
#include <list>
#include <iterator>

#include "Track.h"
#include "ConcreteTrack.h"

using namespace std;

#ifndef TrackMaker_h
#define TrackMaker_h

class TrackMaker : public ConcreteTrack
{
    public:
        TrackMaker();
        TrackMaker(string);
        
        void add90Degree(int, int);
        void addStraight(int, int);
        void addHairpin(int, int);
        void addS_section(int, int);
        void addSlightTurn(int, int);
        void showTrack();

    private:
        Track* track;
};
#endif
