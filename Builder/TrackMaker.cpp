#include "TrackMaker.h"

TrackMaker::TrackMaker()    {}

TrackMaker::TrackMaker(string n)
{
    track = new Track(n);
}

void TrackMaker::add90Degree(int r, int d)
{
    track->addSection("90 Degree Turn", r, d);
}

void TrackMaker::addHairpin(int r, int d)
{
    track->addSection("Hairpin", r, d);
}

void TrackMaker::addS_section(int r, int d)
{
    track->addSection("S section", r, d);
}

void TrackMaker::addSlightTurn(int r, int d)
{
    track->addSection("Slight turn", r, d);
}

void TrackMaker::addStraight(int r, int d)
{
    track->addSection("Straight", r, d);
}

void TrackMaker::showTrack()
{
    track->showTrack();
}