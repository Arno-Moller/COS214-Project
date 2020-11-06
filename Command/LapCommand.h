#ifndef LAPCOMMAND_H
#define LAPCOMMAND_H

#include "Command.h"
#include "../Prototype/Team.h"
#include "../Prototype/RacingTeam.h"
#include "../CarComposite/RaceCar.h"

using namespace std;

class LapCommand: public Command
{
private:
    RaceCar** drivers;
public:
    LapCommand();
    LapCommand(RaceCar** cars);
    ~LapCommand();

    void execute();

    RaceCar** getCars();
    void setCars(RaceCar** cars);
};


#endif // LAPCOMMAND_H