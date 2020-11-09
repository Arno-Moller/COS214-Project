#include "Championship.h"


Championship::Championship(Team** t, double** array , int drivers , int laps) 
{
    this->arr=array;
    this->numDrivers=drivers;
    this->numLaps=laps;
    this->teams=t;
}

Championship::~Championship() 
{
    
}

void Championship::calculate()
{
    driversResults = new Results[numDrivers];
    teamResults = new TeamResults[numDrivers/2];
    int res = 0;

    double* raceTimes = new double[numDrivers];

    for(int i = 0 ; i < numDrivers ; i++)
    {
        raceTimes[i] = 0;
    }

    for(int i = 0; i < numLaps; i++)
    {
        for(int j = 0; j<  numDrivers; j++)
        {
            raceTimes[j] += arr[j][i];
        }
    }

    for(int i = 0 ; i < numDrivers/2 ; i++)
    {
        driversResults[i*2].teamName = teams[i]->getTeamName();
        driversResults[i*2].driver = 1;
        driversResults[i*2].team = i;
        driversResults[i*2].time = raceTimes[i*2];
        driversResults[i*2].teamObject = teams[i];

        driversResults[i*2+1].teamName = teams[i]->getTeamName();
        driversResults[i*2+1].driver = 2;
        driversResults[i*2+1].team = i;
        driversResults[i*2+1].time = raceTimes[i*2+1];
        driversResults[i*2].teamObject = teams[i];

        teamResults[i].teamName = teams[i]->getTeamName();
        teamResults[i].teamObject = teams[i];
        teamResults[i].TeamPoints = 0;
        teamResults[i].driver1Points = 0;
        teamResults[i].driver2Points = 0;
    }
    //sort the teams 
    
    int n = numDrivers;
    int i, j;  

    for (i = 0; i < n-1; i++)    
    {  
        for (j = 0; j < n-i-1; j++)  
        {
            if (driversResults[j].time > driversResults[j+1].time)  
            {
                Results temp = driversResults[j];
                driversResults[j] = driversResults[j+1];
                driversResults[j+1] = temp;
            }
        }
    }

    for(int i = 0 ; i < numDrivers ; i++)
    {
        driversResults[i].points = pointAmount[i];
    }

    for(int i = 0 ; i < numDrivers ; i++)
    {
        teamResults[driversResults[i].team].TeamPoints += driversResults[i].points;

        if(driversResults[i].driver == 1)
        {
            teamResults[driversResults[i].team].driver1Points = driversResults[i].points;
        }
        else
        {
            teamResults[driversResults[i].team].driver2Points = driversResults[i].points;
        }
    }

    n = numDrivers/2;

    for (i = 0; i < n-1; i++)    
    {  
        for (j = 0; j < n-i-1; j++)  
        {
            if (teamResults[j].TeamPoints < teamResults[j+1].TeamPoints)  
            {
                TeamResults temp = teamResults[j];
                teamResults[j] = teamResults[j+1];
                teamResults[j+1] = temp;
            }
        }
    }
}

void Championship::logResults()
{
    for(int i = 0 ; i < numDrivers/2 ; i++)
    {
        teamResults[i].teamObject->getCarOne()->setPoints(teamResults[i].driver1Points);
        teamResults[i].teamObject->getCarTwo()->setPoints(teamResults[i].driver2Points);
        teamResults[i].teamObject->setTeamPoints(teamResults[i].teamObject->getTeamPoints() + teamResults[i].driver1Points + teamResults[i].driver2Points);
    }
}



