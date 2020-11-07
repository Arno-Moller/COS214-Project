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
    CreateTeamCommand* teamCom = new CreateTeamCommand();
    teamCom->execute();
    Team** teams = teamCom->getTeams();

    BuildTrackCommand* tmp = new BuildTrackCommand();
    int laps = tmp->getTrackBuilder()->getLaps();
    vector<TrackSection> track = tmp->getTrack()->getTrack();
    Command* race = new StartRaceCommand(teams, tmp);
    race->execute();
}