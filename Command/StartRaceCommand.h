#ifndef STARTRACECOMMAND_H
#define STARTRACECOMMAND_H

#include "Command.h"
#include "../Memento/Memento.h"
#include "../Memento/TeamState.h"
#include "../Memento/TeamStateCaretaker.h"

#include "../Prototype/Team.h"
#include "../Prototype/RacingTeam.h"
#include "../CarComposite/RaceCar.h"

#include "BuildTrackCommand.h"
#include "RaceConditionCommand.h"
#include "CreateTeamCommand.h"

#include "../Template/Championship.h"
#include "../Template/ConstructorsChampionship.h"
#include "../Template/DriversChampionship.h"

using  namespace std;

class StartRaceCommand: public Command
{
    private:
        Team** constructors;
        RaceCar** drivers;
        BuildTrackCommand* trackBuilder;
        vector<TrackSection> track;
        int laps = 0;
        RaceConditionCommand* weather;
        CreateTeamCommand* teamCom;
    public:
        StartRaceCommand();
        StartRaceCommand(Team** teams, BuildTrackCommand*);
        StartRaceCommand(CreateTeamCommand* , BuildTrackCommand*);
        ~StartRaceCommand();

        void execute();

        Team** getTeams();
        void setTeams(Team** teams);

        RaceCar** getCars();
        void setCars(RaceCar** cars);
        
        BuildTrackCommand* getTrackBuilder();
        void setTrackBuilder(BuildTrackCommand*);

        vector<TrackSection> getTrack();
        void setTrack(vector<TrackSection>);  
};


#endif // STARTRACECOMMAND_H