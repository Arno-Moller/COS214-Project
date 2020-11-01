#include "TrackMaker.h"

TrackMaker::TrackMaker()    {}

TrackMaker::TrackMaker(string n)
{
    track = new Track(n);
}

void TrackMaker::addNinetyDegree(int r, int d)
{
    TrackSection* temp = new NinetyDegreeTurn(r, d);
    track->addSection(temp);
}

void TrackMaker::addHairpin(int r, int d)
{
    TrackSection* temp = new Hairpin(r, d);
    track->addSection(temp);
}

void TrackMaker::addS_section(int r, int d)
{
    TrackSection* temp = new S_Section(r, d);
    track->addSection(temp);
}

void TrackMaker::addSlightTurn(int r, int d)
{
    TrackSection* temp = new SlightTurn(r, d);
    track->addSection(temp);
}

void TrackMaker::addStraight(int r, int d)
{
    TrackSection* temp = new Straight(r, d);
    track->addSection(temp);
}

void TrackMaker::showTrack()
{
    track->showTrack();
}