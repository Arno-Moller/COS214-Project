#include "CreateTeamCommand.h"
CreateTeamCommand::CreateTeamCommand() 
{
    this->teams = new Team*[10];

    for (int i = 0; i < 10; i++)
    {
        teams[i] = nullptr;
    }

}

CreateTeamCommand::~CreateTeamCommand() 
{
    for (int i = 0; i < 10; i++)
    {
        delete teams[i];
    }
    delete teams;
}

void CreateTeamCommand::execute() 
{
    for (int i = 0; i < 10; i++)
    {
        teams[i] = new RacingTeam();
        teams[i]->setTeamName(names[i]);
        teams[i]->buildCar();
    }
    doesTheTeamsExist = true;
}

Team** CreateTeamCommand::getTeams() 
{
    if (doesTheTeamsExist == true)
    {
        return teams;
    }
    
    cout << "The teams have not been created" << endl;
    return nullptr;
}

