#ifndef ConcreteTrack_h
#define ConcreteTrack_h

#include <iostream>

#include "Track.h"

using namespace std;

class ConcreteTrack
{
public:
    ConcreteTrack(); 
    virtual void add90Degree(int, int) = 0;
    virtual void addStraight(int, int) = 0;
    virtual void addHairpin(int, int) = 0;
    virtual void addS_section(int, int) = 0;
    virtual void addSlightTurn(int, int) = 0;
    virtual void showTrack() = 0;

private:

};

#endif
