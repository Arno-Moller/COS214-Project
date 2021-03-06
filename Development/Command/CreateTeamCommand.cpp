#include "CreateTeamCommand.h"

CreateTeamCommand::CreateTeamCommand() 
{
    this->teams = new Team*[10];

    for (int i = 0; i < 10; i++)
    {
        teams[i] = nullptr;
    }

    this->teamSaves = new TeamStateCaretaker*[10];
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
    
    string driver1 = driverOneNames[0];
    teams[0]->getCarOne()->setName(driver1);

    string driver2 = driverTwoNames[0];
    teams[0]->getCarTwo()->setName(driver2);
    
    for (int i = 1; i < 10; i++)
    {
        teams[i] = teams[0]->clone();
        teams[i]->setTeamName(names[i]);
        
        driver1 = driverOneNames[i];
        teams[i]->getCarOnePart()->setName(driver1);

        driver2 = driverTwoNames[i];
        teams[i]->getCarTwoPart()->setName(driver2);
    }
    doesTheTeamsExist = true;

    for (int i = 0; i < 10; i++)
    {
        teamSaves[i] = new TeamStateCaretaker(teams[i]->createMemento());
    }
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

void CreateTeamCommand::restoreTeams() 
{
    for (int i = 0; i < 10; i++)
    {   
        teams[i]->loadMemento(teamSaves[i]->getBackupTeam());
    }
}

