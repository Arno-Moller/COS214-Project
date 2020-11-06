#ifndef STARTRACECOMMAND_H
#define STARTRACECOMMAND_H

#include "Command.h"
#include "../Prototype/Team.h"
#include "../Prototype/RacingTeam.h"
#include "../CarComposite/RaceCar.h"
#include "LapCommand.h"

using  namespace std;

class StartRaceCommand: public Command
{
private:
    Team** constructors;
    RaceCar** drivers;
    LapCommand* race;
    // ADD TRACK TO RACE ON!!!!!
public:
    StartRaceCommand();
    StartRaceCommand(Team** teams);
    ~StartRaceCommand();

    void execute();

    Team** getTeams();
    void setTeams(Team** teams);

    RaceCar** getCars();
    void setCars(RaceCar** cars); 


};


#endif // STARTRACECOMMAND_H