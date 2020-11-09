#include "StartRaceCommand.h"


StartRaceCommand::StartRaceCommand() 
{
    constructors = new Team*[10];
    drivers = new RaceCar*[20];
    trackBuilder = new BuildTrackCommand();
    weather = new RaceConditionCommand();

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
    }
}

StartRaceCommand::StartRaceCommand(CreateTeamCommand* teamCom, BuildTrackCommand* t) 
{
    this->teamCom = teamCom;
    trackBuilder = t;
    teamCom->execute();
    Team** teams = teamCom->getTeams();

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
    }
}

StartRaceCommand::~StartRaceCommand() 
{

}

void StartRaceCommand::execute() 
{
    cout << "##############################################" << endl << endl;
    cout << "               Race STARTED!!!                " << endl << endl;
    cout << "##############################################" << endl << endl;

    weather->execute();
    teamCom->restoreTeams();
    setTeams(teamCom->getTeams());

    double** time = new double*[20];

    for(int i = 0; i < 20; i++)
    {
        time[i] = new double[laps];
    }

    cout << "****************************************************************************************" << endl;
    cout << endl << endl;

    for(int i = 0; i < laps; i++)
    {   
        cout << "LAP: " << i+1 << endl << endl;

        for(int j = 0; j < 20; j++)
        {
            double d = 0;
            double temp = 0;

            for(TrackSection it:track)
            {
                d = it.getDistance();
                temp += d*(1+((double)drivers[j]->getTireGrip())*(0.00035));
            }
            drivers[j]->lap();
            

            time[j][i] = temp/6;
            
        }
        cout << endl << endl;
        cout << "****************************************************************************************" << endl;
        cout << endl << endl;
    }

    cout << "##############################################" << endl << endl;
    cout << "               Race ENDED!!!                  " << endl << endl;
    cout << "##############################################" << endl << endl;
    
    Championship* teamsCup = new ConstructorsChampionship(constructors, time, 20, laps);
    teamsCup->calculate();
    teamsCup->print();

    Championship* drivers = new DriversChampionship(constructors, time, 20, laps);
    drivers->calculate();
    drivers->print();

    teamsCup->logResults();
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
    
    cout << "LOADING next track: " << trackBuilder->getTrackBuilder()->getName() << endl;
    cout << "Location: " << trackBuilder->getTrackBuilder()->getLocation() << endl;

    weather = new RaceConditionCommand(trackBuilder->getTrackBuilder()->getLocation());

    cout << endl;
}

vector<TrackSection> StartRaceCommand::getTrack() 
{
    return track;
}

void StartRaceCommand::setTrack(vector<TrackSection> t) 
{
    track = t;
}
