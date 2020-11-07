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
    teams[0] = new RacingTeam("m");
    teams[0]->buildCar();
    teams[0]->setTeamName(names[0]);
    
    for (int i = 1; i < 10; i++)
    {
        teams[i] = teams[0]->clone();
        // teams[i]->buildCar();
        teams[i]->setTeamName(names[i]);
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

