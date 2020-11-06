#include <iostream>
#include <new>


#include "../Builder/Track.h"
#include "../Builder/TrackSection.h"
#include "../Builder/ConcreteTrack.h"
#include "../Builder/TrackBuilder.h"
#include "../Builder/TrackMaker.h"

#include "../Builder/NinetyDegreeTurn.h"
#include "../Builder/Hairpin.h"
#include "../Builder/S_Section.h"
#include "../Builder/SlightTurn.h"
#include "../Builder/Straight.h"

#include "../Builder/Track.cpp"
#include "../Builder/TrackSection.cpp"
#include "../Builder/ConcreteTrack.cpp"
#include "../Builder/TrackBuilder.cpp"
#include "../Builder/TrackMaker.cpp"

#include "../Builder/NinetyDegreeTurn.cpp"
#include "../Builder/Hairpin.cpp"
#include "../Builder/S_Section.cpp"
#include "../Builder/SlightTurn.cpp"
#include "../Builder/Straight.cpp"

#include "Command.h"
#include "BuildTrackCommand.h"

#include "BuildTrackCommand.cpp"

#include "../CarComposite/CarBuilder.h"
#include "../CarComposite/CarPart.h"
#include "../CarComposite/Chassie.h"
#include "../CarComposite/Engine.h"
#include "../CarComposite/Hub.h"
#include "../CarComposite/RaceCar.h"
#include "../CarComposite/RaceCarBuilder.h"
#include "../CarComposite/Suspension.h"
#include "../CarComposite/Tire.h"
#include "../CarComposite/Wing.h"

#include "../CarComposite/CarBuilder.cpp"
#include "../CarComposite/CarPart.cpp"
#include "../CarComposite/Chassie.cpp"
#include "../CarComposite/Engine.cpp"
#include "../CarComposite/Hub.cpp"
#include "../CarComposite/RaceCar.cpp"
#include "../CarComposite/RaceCarBuilder.cpp"
#include "../CarComposite/Suspension.cpp"
#include "../CarComposite/Tire.cpp"
#include "../CarComposite/Wing.cpp"

#include "../TireState/GoodCondition.h"
#include "../TireState/OKCondition.h"
#include "../TireState/BadCondition.h"
#include "../TireState/TireState.h"

#include "../TireState/TireState.cpp"
#include "../TireState/GoodCondition.cpp"
#include "../TireState/OKCondition.cpp"
#include "../TireState/BadCondition.cpp"

#include "../TireCompoundStrategy/TireCompound.h"
#include "../TireCompoundStrategy/SoftCompound.h"
#include "../TireCompoundStrategy/MediumCompound.h"
#include "../TireCompoundStrategy/HardCompound.h"

#include "../TireCompoundStrategy/TireCompound.cpp"
#include "../TireCompoundStrategy/SoftCompound.cpp"
#include "../TireCompoundStrategy/MediumCompound.cpp"
#include "../TireCompoundStrategy/HardCompound.cpp"

#include "../Prototype/Team.h"
#include "../Prototype/RacingTeam.h"

#include "../Prototype/Team.cpp"
#include "../Prototype/RacingTeam.cpp"

#include "../Strategy/Strategy.h"

//#include "../Strategy/Strategy.cpp"

#include "../Strategy/Sensible.h"
#include "../Strategy/Cautious.h"
#include "../Strategy/Aggressive.h"

#include "../Strategy/Sensible.cpp"
#include "../Strategy/Cautious.cpp"
#include "../Strategy/Aggressive.cpp"

#include "CreateTeamCommand.h"
#include "CreateTeamCommand.cpp"

#include "StartRaceCommand.h"
#include "StartRaceCommand.cpp"

#include "LapCommand.h"
#include "LapCommand.cpp"

using namespace std;

int main() 
{
    //CreateTeamCommand* teamCom = new CreateTeamCommand();
    //teamCom->execute();
    //Team** teams = teamCom->getTeams();

    BuildTrackCommand* tmp = new BuildTrackCommand();
    tmp ->execute();
    //Command* race = new StartRaceCommand(teams, tmp);
    //Command* race = new StartRaceCommand();
    //race->execute();

    int laps = tmp->getTrackBuilder()->getLaps();
    vector<TrackSection> track = tmp->getTrack()->getTrack();
    cout << track.size() << endl;

    double** time = new double*[10];

    for(int i = 0; i < 10; i++)
    {
        time[i] = new double[laps];
    }

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < laps; j++)
        {
            double d = 0;
            double temp = 0;

            for(TrackSection it:track)
            {
                //d = it.getDistance();
                temp += 5.0;//drivers[j]->getGrip();
                //drivers[j]->lap();
                //cout << "run" << endl;
            }
            time[i][j] = j;
        }
    }

    for(int i = 0; i < 10; i++)
    {
        cout << "Driver " << i+1 << " :" << endl;
        for(int j = 0; j < laps; j++)
        {
            cout << "\tlap" << j << "\t time: " << time[i][j] << endl;
        }
        cout << "*****************************************" << endl;
        cout << endl;
    }

    return 0;
}
