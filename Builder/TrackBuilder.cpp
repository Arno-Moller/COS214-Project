#include "TrackBuilder.h"

TrackBuilder::TrackBuilder()  
{
    concreteTrack = new TrackMaker("Test");
    laps = 10;
    name = "Test";
    location = "Test location";
}

TrackBuilder::TrackBuilder(string n, int l)  
{
    name = n;
    laps = l;
    concreteTrack = new TrackMaker(n);
    location = "Europe";
}

TrackBuilder::~TrackBuilder()
{
    delete concreteTrack;
    concreteTrack = nullptr;
}

void TrackBuilder::construct()
{
    concreteTrack->addStraight(5);
    concreteTrack->addHairpin(10);
    concreteTrack->addS_section(30);
    concreteTrack->addSlightTurn(12);
    concreteTrack->addStraight(11);
    concreteTrack->addStraight(123);
}

void TrackBuilder::display()
{
    concreteTrack->showTrack();
}

ConcreteTrack* TrackBuilder::getTrack()
{
    return concreteTrack;
}

int TrackBuilder::getLaps()
{
    return laps;
}

string TrackBuilder::getName()
{
    return name;
}

string TrackBuilder::getLocation()
{
    return location;
}
