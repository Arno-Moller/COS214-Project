#ifndef CREATETEAMCOMMAND_H
#define CREATETEAMCOMMAND_H

#include "Command.h"
#include "../Prototype/Team.h"
#include "../Prototype/RacingTeam.h"

using namespace std;

class CreateTeamCommand: public Command
{
public:
    CreateTeamCommand();
    ~CreateTeamCommand();
    void execute();

    Team** getTeams();

private:
    Team** teams;
    string names[10] = {"Mercedes AMG F1", "McLaren", "Ferrari", "Racing Point", "Red Bull Racing", "AlphaTauri", "Haas F1", "Renault", "Alfa Romeo Racing"};
    bool doesTheTeamsExist = false;
};


#endif // CREATETEAMCOMMAND_H