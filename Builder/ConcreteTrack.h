#ifndef ConcreteTrack_h
#define ConcreteTrack_h

#include <iostream>

#include "Track.h"

using namespace std;

class ConcreteTrack
{
    public:
        ConcreteTrack(); 
        virtual void addNinetyDegree(int) = 0;
        virtual void addStraight(int) = 0;
        virtual void addHairpin(int) = 0;
        virtual void addS_section(int) = 0;
        virtual void addSlightTurn(int) = 0;
        virtual void showTrack() = 0;

    private:

};

#endif
