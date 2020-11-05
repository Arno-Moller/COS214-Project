#include "TrackMaker.h"

TrackMaker::TrackMaker()    {}

TrackMaker::TrackMaker(string n)
{
    track = new Track(n);
}

TrackMaker::~TrackMaker()    
{
    delete track;
    track = nullptr;
}

void TrackMaker::addNinetyDegree(int d)
{
    TrackSection* temp = new NinetyDegreeTurn(d);
    track->addSection(temp);

    delete temp;
}

void TrackMaker::addHairpin(int d)
{
    TrackSection* temp = new Hairpin(d);
    track->addSection(temp);

    delete temp;
}

void TrackMaker::addS_section(int d)
{
    TrackSection* temp = new S_Section(d);
    track->addSection(temp);

    delete temp;
}

void TrackMaker::addSlightTurn(int d)
{
    TrackSection* temp = new SlightTurn(d);
    track->addSection(temp);

    delete temp;
}

void TrackMaker::addStraight(int d)
{
    TrackSection* temp = new Straight(d);
    track->addSection(temp);

    delete temp;
}

list<TrackSection> TrackMaker::getTrack()
{
   
    return track->getTrack();
}

void TrackMaker::showTrack()
{
    track->showTrack();
}