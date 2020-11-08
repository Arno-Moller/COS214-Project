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
}

TrackBuilder::~TrackBuilder()
{
    delete concreteTrack;
    concreteTrack = nullptr;
}

void TrackBuilder::construct()
{
    concreteTrack->addStraight(500);
    concreteTrack->addHairpin(700);
    concreteTrack->addS_section(1000);
    concreteTrack->addSlightTurn(300);
    concreteTrack->addStraight(800);
    concreteTrack->addNinetyDegree(200);
    concreteTrack->addStraight(1500);
}

void TrackBuilder::construct(string s, int l)
{
    laps = l;
    
    if(s == "Europe")
    {
        concreteTrack->addStraight(500);
        concreteTrack->addHairpin(700);
        concreteTrack->addS_section(1000);
        concreteTrack->addSlightTurn(300);
        concreteTrack->addStraight(800);
        concreteTrack->addNinetyDegree(200);
        concreteTrack->addStraight(1500);

        location = "Europe";
        name = "Monza";
    }
    else if(s == "America")
    {
        concreteTrack->addNinetyDegree(200);
        concreteTrack->addHairpin(700);
        concreteTrack->addS_section(1000);
        concreteTrack->addStraight(500);
        concreteTrack->addStraight(800);
        concreteTrack->addSlightTurn(300);
        concreteTrack->addStraight(1500);

        location = "America";
        name = "Imola";
    }
    else if(s == "Italy")
    {
        concreteTrack->addStraight(1500);
        concreteTrack->addStraight(500);
        concreteTrack->addStraight(800);
        concreteTrack->addHairpin(700);
        concreteTrack->addNinetyDegree(200);
        concreteTrack->addSlightTurn(300);
        concreteTrack->addS_section(1000);

        location = "Italy";
        name = "Red Bull Ring";
    }
    else if(s == "Brazil")
    {
        concreteTrack->addS_section(1000);
        concreteTrack->addStraight(500);
        concreteTrack->addHairpin(700);
        concreteTrack->addSlightTurn(300);
        concreteTrack->addStraight(800);
        concreteTrack->addStraight(1500);
        concreteTrack->addNinetyDegree(200);

        location = "Brazil";
        name = "Solverstone";
    }
    else
    {
        concreteTrack->addSlightTurn(300);
        concreteTrack->addStraight(500);
        concreteTrack->addHairpin(700);
        concreteTrack->addStraight(800);
        concreteTrack->addStraight(1500);
        concreteTrack->addS_section(1000);
        concreteTrack->addNinetyDegree(200);

        location = "Austrailia";
        name = "Spa-Francorchamps";
    }
    
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
