#ifndef STARTRACECOMMAND_H
#define STARTRACECOMMAND_H

#include "Command.h"
#include "../Prototype/Team.h"
#include "../Prototype/RacingTeam.h"
#include "../CarComposite/RaceCar.h"
#include "LapCommand.h"
#include "BuildTrackCommand.h"

using  namespace std;

class StartRaceCommand: public Command
{
    private:
        Team** constructors;
        RaceCar** drivers;
        LapCommand* lap;
        BuildTrackCommand* trackBuilder;
        vector<TrackSection> track;
        int laps = 0;
        // ADD TRACK TO RACE ON!!!!!
    public:
        StartRaceCommand();
        StartRaceCommand(Team** teams, BuildTrackCommand*);
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