#include "ConstructorsChampionship.h"



ConstructorsChampionship::ConstructorsChampionship(Team** t, double** array , int drivers , int laps):Championship(t, array , drivers , laps)
{
     
}

ConstructorsChampionship::~ConstructorsChampionship() 
{
    
}

// void ConstructorsChampionship::calculate() 
// {
//     int numOfTeams = 0;
//     double time; 
//     int teamNumber = 1;

//     Results* teamResults = new Results[numDrivers];
//     int res = 0;

//     for(int i = 0 ; i < numDrivers ; i++)
//     {
//         time = 0.0;
//         for(int j = 0 ; j < numLaps ; j++)
//         {
//             time = time + arr[i][j];
           
//         }
       

//         if(numOfTeams==2)
//         {
//             numOfTeams=0;
//             teamNumber++;
//         }

//         teamResults[res].driver = numOfTeams+1;
//         teamResults[res].team = teamNumber;
//         teamResults[res].time = time;
//         res++;
//         numOfTeams++;
       
//     }
//     double teamtime=0; 

//     for(int i = 0 ; i< numDrivers ; i++)
//     {
//         double teamtime=0.0; 
//         if(i+1<numDrivers)
//         if(teamResults[i].team==teamResults[i+1].team)
//         {
//             teamtime=teamResults[i].time+teamResults[i+1].time;

//             teamResults[i].TeamTime = teamtime;
//             teamResults[i+1].TeamTime= teamtime;

//             // cout<<"Team " + teamResults[i].team <<endl;
//             // cout<<"Time: "+ static_cast<int>(teamtime)<<endl;
//         }
//     }

//     //sort the teams 
//     int n = numDrivers;
//     int i, j;  

//     for (i = 0; i < n-1; i++)      
//     {
//         for (j = 0; j < n-i-1; j++) 
//         {
//             if (teamResults[j].TeamTime > teamResults[j+1].TeamTime)  
//             {
//                 swap(&arr[j], &arr[j+1]); 
//             }
//         }
//     }

//     for(int i = 0; i < numDrivers ; i++)
//     {
//         int place = 1;
//         cout<< place << " Place is:"<<endl;
//         cout<<"Team " << teamResults[i].team <<endl;
//         cout<<"Time: "<< static_cast<int>(teamResults[i].TeamTime)<<endl;
//         i++;
//         place++;
//     }


// }

void ConstructorsChampionship::swap(double **xp, double **yp)  
{  
    double temp = **xp;  
    **xp = **yp;  
    **yp = temp;  
}  

// void ConstructorsChampionship::calculate()
// {
//     TeamResults* teamResults = new TeamResults[numDrivers];
//     int res = 0;

//     double* raceTimes = new double[numDrivers];

//     for(int i = 0; i < numDrivers; i++)
//     {
//         for(int j = 0; j< numLaps ; j++)
//         {
//             raceTimes[i] += arr[i][j];
//         }
//     }

//     for(int i = 0 ; i < numDrivers/2 ; i++)
//     {
//         teamResults[i].team = i;

//         teamResults[i].driver1 = i*2;
//         teamResults[i].time1 = raceTimes[i*2];

//         teamResults[i].driver1 = i*2+1;
//         teamResults[i].time2 = raceTimes[i*2+1];
//     }
   
//    //sort the teams 
//     int n = numDrivers;
//     int i, j;  

//     for (i = 0; i < n-1; i++)    
//     {  
//         for (j = 0; j < n-i-1; j++)  
//         {
//             if (teamResults[j].time > teamResults[j+1].time)  
//             {
//                 Results temp = teamResults[j];
//                 teamResults[j] = teamResults[j+1];
//                 teamResults[j+1] = temp;
//             }
//         }
//     }

//     for(int i = 0 ; i < numDrivers ; i++)
//     {
//         int place = 1;
//         cout<< place << "Place is: "<<endl;
//         cout<<"Team " << teamResults[i].driver <<endl;
//         cout<<"Time: "<< static_cast<int>(teamResults[i].time)<<endl;
        
//         place++;
//     }       

// }

void ConstructorsChampionship::calculate()
{
    Results* driversResults = new Results[numDrivers];
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

        driversResults[i*2+1].driver = 2;
        driversResults[i*2+1].team = i;
        driversResults[i*2+1].time = raceTimes[i*2+1];
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
        cout << "===========================================" << endl << endl;

        cout << "In place " << i+1 << " :" << endl;
        cout <<"Team " << driversResults[i].teamName << "'s driver "
                << driversResults[i].driver  << endl;
        cout << "Time: " << static_cast<int>(driversResults[i].time) << endl;

        cout  << endl;
    }       

}