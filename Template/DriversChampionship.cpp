#include "DriversChampionship.h"


DriversChampionship::DriversChampionship(Team** t, double** array , int drivers , int laps ):Championship(t, array , drivers , laps)
{
    
}

DriversChampionship::~DriversChampionship() 
{
    
}

// void DriversChampionship::calculate() 
// {
    
//     int numOfTeams = 0;
//     double time; 
//     int teamNumber = 1;

//     Results* driversResults = new Results[numDrivers];
//     int res = 0;

//     for(int i = 0 ; i < numDrivers ; i++)
//     {
//         time= 0.0;

//         for(int j = 0 ; j < numLaps ; j++)
//         {
//             time = time + arr[i][j];
           
//         }
    
//         if(numOfTeams==2)
//         {
//             numOfTeams=0;
//             teamNumber++;
//         }

//         driversResults[res].driver = numOfTeams+1;
//         driversResults[res].team = teamNumber;
//         driversResults[res].time = time;
//         res++;
//         numOfTeams++;
//     }
   
//    //sort the teams 
//     int n = numDrivers;
//     int i, j;  

//     for (i = 0; i < n-1; i++)    
//     {  
//         for (j = 0; j < n-i-1; j++)  
//         {
//             if (driversResults[j].time > driversResults[j+1].time)  
//             {
//                 swap(&arr[j], &arr[j+1]); 
//             }
//         }
//     }


//     for(int i = 0 ; i < numDrivers ; i++)
//     {
//         int place = 1;
//         cout<< place << "Place is: "<<endl;
//         cout<<"Team " << driversResults[i].driver <<endl;
//         cout<<"Time: "<< static_cast<int>(driversResults[i].time)<<endl;
        
//         place++;
//     }       

// }

void swap(double **xp, double **yp)
{
    double temp = **xp;  
    **xp = **yp;  
    **yp = temp;   
}

void DriversChampionship::calculate()
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
        driversResults[i*2].driver = i*2;
        driversResults[i*2].team = i;
        driversResults[i*2].time = raceTimes[i*2];

        driversResults[i*2+1].driver = i*2+1;
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
        cout<< "In place " << i+1 << " :"<<endl;
        cout<<"Team " << driversResults[i].driver <<endl;
        cout<<"Time: "<< static_cast<int>(driversResults[i].time)<<endl;
    }       

}




