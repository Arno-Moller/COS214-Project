#include "SeasonalResultsCommand.h"

SeasonalResultsCommand::SeasonalResultsCommand(Team** t)
{
    teams = t;
    results = new TeamResult[10];

    for(int i = 0; i < 10; i++)
    {
        results[i].team = t[i];
        results[i].teamName = t[i]->getTeamName();
        results[i].teamPoints = t[i]->getTeamPoints();
    }

    int n = 10;
    int i, j;  

    for (i = 0; i < n-1; i++)    
    {  
        for (j = 0; j < n-i-1; j++)  
        {
            if (results[j].teamPoints < results[j+1].teamPoints)  
            {
                TeamResult temp = results[j];
                results[j] = results[j+1];
                results[j+1] = temp;
            }
        }
    }
}

void SeasonalResultsCommand::execute()
{
    cout << "##############################################" << endl << endl;
    cout << "            CURRENT SEASONAL RESULTS          " << endl << endl;
    cout << "##############################################" << endl << endl << endl;

    for(int i = 0; i < 10; i++)
    {
        cout << "----------------------------------------------" << endl << endl;
        cout << "\tPlace " << i+1 << endl;
        cout << "\t\tTeam name: " << results[i].teamName << endl;
        cout << "\t\tPionts : " << results[i].teamPoints << endl << endl;
    }
    cout << "----------------------------------------------" << endl << endl;
}