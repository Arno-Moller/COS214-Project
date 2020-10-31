#include "TrackBuilder.h"

TrackBuilder::TrackBuilder()  
{
    concreteTrack = new TrackMaker("Test");
}

TrackBuilder::~TrackBuilder()
{

}

void TrackBuilder::construct()
{
    concreteTrack->addStraight(10, 5);
    concreteTrack->addHairpin(20, 10);
    concreteTrack->addS_section(30, 30);
    concreteTrack->addSlightTurn(50, 12);
    concreteTrack->addStraight(39, 11);
}

void TrackBuilder::display()
{
    concreteTrack->showTrack();
}
