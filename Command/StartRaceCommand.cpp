#include "StartRaceCommand.h"


StartRaceCommand::StartRaceCommand() 
{
    constructors = new Team*[10];
    drivers = new RaceCar*[20];
    lap = new LapCommand();
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

        lap = new LapCommand(drivers);
    }
}

StartRaceCommand::~StartRaceCommand() 
{

}

void StartRaceCommand::execute() 
{
    cout << "Race STARTED!!!" << endl << endl;
    // weather->execute();

    double** time = new double*[laps];

    for(int i = 0; i < 20; i++)
    {
        time[i] = new double[20];
    }

    for(int i = 0; i < laps; i++)
    {   
        cout << "LAP: " << i+1 << endl;
        cout << endl;

        for(int j = 0; j < 20; j++)
        {
            double d = 0;
            double temp = 0;
            
            cout << drivers[j]->getName() << " :" << endl;

            for(TrackSection it:track)
            {
                d = it.getDistance();
                temp += d*(double)drivers[j]->getTireGrip();
                drivers[j]->lap();
            }
            

            time[j][i] = temp;
            
            cout <<"Time: " << time[j][i] << endl;
            cout << endl;
        }
        cout << "*****************************************" << endl;
        cout << endl;
        // lap->execute();
    }
    
    // Championship* champ = new ConstructorsChampionship(time, 20, laps);
    // champ->calculate();


    
    // for(int i = 0; i < 20; i++)
    // {
    //     cout << "Driver" << i+1 << " :" << endl;
    //     for(int j = 0; j < laps; j++)
    //     {
    //         cout << "\tlap" << j+1 << "\t time: " << time[i][j] << endl;
    //     }
    //     cout << "*****************************************" << endl;
    //     cout << endl;
    // }
    

   cout << "Race END!!!" << endl << endl;
    
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
    
    cout << "Next track: " << trackBuilder->getTrackBuilder()->getName() << endl;
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
