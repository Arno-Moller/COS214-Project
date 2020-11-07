#include "SingletonChampionship.h"

SingletonChampionship* SingletonChampionship::championship = new SingletonChampionship();

SingletonChampionship* SingletonChampionship::getInstance()
{
    return championship;
}

SingletonChampionship::SingletonChampionship()
{

}

void SingletonChampionship::StartChampionship()
{
    BuildTrackCommand** tracks = new BuildTrackCommand*[5];

    for(int i = 0; i < 5; i++)
    {
        tracks[i] = new BuildTrackCommand();
    }

    CreateTeamCommand* teamCom = new CreateTeamCommand();
    teamCom->execute();
    Team** teams = teamCom->getTeams();
    StartRaceCommand* race = new StartRaceCommand(teams, tracks[0]);

    for(int i = 0; i < 5; i++)
    {
        race->setTrackBuilder(tracks[i]);
        race->execute();

        string option = "s";
        bool next = false;

        // while(!next)
        // {
            cout    << "Select an option and press Enter:" 
                    << "\n\tShow results: s"
                    << "\n\tnext: n" 
                    << "\n\texit e" << endl;

            // // cin >> option;
            cout << "\t\t\t\t" << i << endl;
            // if(option == "n")
            // {
                // race->setTrackBuilder(tracks[i]);
                // race->execute();
                // next = true;
            // }
            // else if(option == "s")
            // {
                cout << "Show results: " << endl;
                // option = "n";
            // }
            // else
            // {
            //     cout << "Exited" << endl;
            //     //return;
            // }
        // }
        
    }

}