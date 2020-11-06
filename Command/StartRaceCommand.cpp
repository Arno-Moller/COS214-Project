#include "StartRaceCommand.h"


StartRaceCommand::StartRaceCommand() 
{
    constructors = new Team*[10];
    drivers = new RaceCar*[20];
    lap = new LapCommand();
    trackBuilder = new BuildTrackCommand();

    for (int i = 0; i < 10 ; i++)
    {
        constructors[i] = nullptr;
    }

    for (int i = 0; i < 20; i++)
    {
        drivers[i] = nullptr;
    }
}

StartRaceCommand::StartRaceCommand(Team** teams, BuildTrackCommand* t) 
{
    setTrackBuilder(t); 

    if (teams != nullptr)
    {
        this->constructors = teams;
        drivers = new RaceCar*[20];

        int j = 0;
        for (int i = 0; i < 10; i++)
        {
            drivers[j] = constructors[i]->getCarOne();
            j++;
            drivers[j] = constructors[i]->getCarTwo();
            j++;
        }

        lap = new LapCommand(drivers);
    }
}

StartRaceCommand::~StartRaceCommand() 
{

}

void StartRaceCommand::execute() 
{
    trackBuilder->execute();
    vector<TrackSection> track = trackBuilder->getTrack()->getTrack();

    lap->execute();
}

Team** StartRaceCommand::getTeams() 
{
    return constructors;
}

void StartRaceCommand::setTeams(Team** teams) 
{
    if (teams != nullptr)
    {
        this->constructors = teams;

        int j = 0;
        for (int i = 0; i < 10; i++)
        {
            drivers[j] = constructors[i]->getCarOne();
            j++;
            drivers[j] = constructors[i]->getCarTwo();
            j++;
        }

        this->lap->setCars(drivers);
    }
}

RaceCar** StartRaceCommand::getCars() 
{
    return drivers;
}

void StartRaceCommand::setCars(RaceCar** cars) 
{
    this->drivers = cars;
}

BuildTrackCommand* StartRaceCommand::getTrackBuilder() 
{
    return trackBuilder;
}

void StartRaceCommand::setTrackBuilder(BuildTrackCommand* t) 
{
    trackBuilder = t;
    trackBuilder->execute();
    track = trackBuilder->getTrack()->getTrack();
}

vector<TrackSection> StartRaceCommand::getTrack() 
{
    return track;
}

void StartRaceCommand::setTrack(vector<TrackSection> t) 
{
    track = t;
}
