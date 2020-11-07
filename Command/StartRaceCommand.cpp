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
    double** time = new double*[20];

    for(int i = 0; i < 20; i++)
    {
        time[i] = new double[laps];
    }

    for(int i = 0; i < 20; i++)
    {
        for(int j = 0; j < laps; j++)
        {
            double d = 0;
            double temp = 0;

            for(TrackSection it:track)
            {
                d = it.getDistance();
                // temp += d*(double)5;//drivers[j]->getGrip();
                temp += (double)drivers[i]->getTireGrip();
                // drivers[j]->lap();
                // cout << "b " << drivers[j]->getTireGrip() << endl;
            }
            time[i][j] = temp;
            // time[i][j] = drivers[j]->getTireGrip();
            // cout << j << " - " << drivers[j]->getTireGrip() << endl;
        }
    }

    for(int i = 0; i < 20; i++)
    {
        cout << "Driver" << i+1 << " :" << endl;
        for(int j = 0; j < laps; j++)
        {
            cout << "\tlap" << j+1 << "\t time: " << time[i][j] << endl;
        }
        cout << "*****************************************" << endl;
        cout << endl;
    }
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
    laps = trackBuilder->getTrackBuilder()->getLaps();
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
