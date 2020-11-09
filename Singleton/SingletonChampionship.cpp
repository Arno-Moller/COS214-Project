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
        race->execute();

        string option = "s";
        bool next = false;

        
        // while(!next)
        // {
        //     cout    << "Select an option and press Enter:" 
        //             << "\n\tShow results: s"
        //             << "\n\tnext: n" 
        //             << "\n\texit e" << endl;

        //     //cin >> option;
        //     cout << "\t\t\t\t" << i << endl;
        //     if(option == "n")
        //     {
        //         next = true;
        //     }
        //     else if(option == "s")
        //     {
        //         cout << "Show results: " << endl;
        //         //option = "n";
        //     }
        //     else
        //     {
        //         cout << "Exited" << endl;
        //         return;
        //     }
        // }
    }

    SeasonalResultsCommand* results = new SeasonalResultsCommand(teamCom->getTeams());
    results->execute();


    for(int i = 0; i < 5; i++)
    {
        delete tracks[i];
    }
    delete tracks;
    tracks = nullptr;

    delete race;
    race = nullptr;
}