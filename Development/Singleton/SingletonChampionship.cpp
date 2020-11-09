#include "SingletonChampionship.h"

SingletonChampionship* SingletonChampionship::championship = new SingletonChampionship();

SingletonChampionship* SingletonChampionship::getInstance()
{
    return championship;
}

SingletonChampionship::SingletonChampionship()
{

}

SingletonChampionship::~SingletonChampionship()
{
    delete championship;
    championship = nullptr;
}

void SingletonChampionship::StartChampionship()
{
    BuildTrackCommand** tracks = new BuildTrackCommand*[5];


    tracks[0] = new BuildTrackCommand("Europe", 10);
    tracks[1] = new BuildTrackCommand("America", 10);
    tracks[2] = new BuildTrackCommand("Brazil", 10);
    tracks[3] = new BuildTrackCommand("Australia", 10);
    tracks[4] = new BuildTrackCommand("Italy", 10);


    CreateTeamCommand* teamCom = new CreateTeamCommand();
    teamCom->execute();

    StartRaceCommand* race = new StartRaceCommand(teamCom, tracks[0]);
    for(int i = 0; i < 5; i++)
    {
        race->setTrackBuilder(tracks[i]);

        string start = "";

        while(start != "s")
        {
            cout    << "Press s and enter to start race: ";
            cin >> start;
        }

        race->execute();

        string option = "";
        bool next = false;
        
        while(!next)
        {
            cout    << "Select an option and press Enter:" 
                    << "\n\tShow results: r"
                    << "\n\tNext: n" 
                    << "\n\tExit: e" << endl;

            cin >> option;

            if(option == "n")
            {
                next = true;
            }
            else if(option == "r")
            {
                cout << "Show results: " << endl;
                SeasonalResultsCommand* results = new SeasonalResultsCommand(teamCom->getTeams());
                results->execute();
            }
            else
            {
                cout << "Exited" << endl;
                return;
            }
        }
    }

    


    for(int i = 0; i < 5; i++)
    {
        delete tracks[i];
    }
    delete tracks;
    tracks = nullptr;

    delete race;
    race = nullptr;
}