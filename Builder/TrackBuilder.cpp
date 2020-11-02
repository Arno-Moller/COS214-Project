#include "TrackBuilder.h"

TrackBuilder::TrackBuilder()  
{
    concreteTrack = new TrackMaker("Test");
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
