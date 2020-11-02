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

        ~TrackMaker();
        
        void addNinetyDegree(int);
        void addStraight(int);
        void addHairpin(int);
        void addS_section(int);
        void addSlightTurn(int);
        void showTrack();

    private:
        Track* track;
};
#endif
