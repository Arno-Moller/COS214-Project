#include "ConstructorsChampionship.h"



ConstructorsChampionship::ConstructorsChampionship(double** array , int drivers , int laps):Championship(array , drivers , laps)
{
     
}

ConstructorsChampionship::~ConstructorsChampionship() 
{
    
}

void ConstructorsChampionship::calculate() 
{
    int numofTeams=0;
    double time; 
    int teamNumber=1;

     Results* driversResults = new Results[numDrivers];
     int res=0;

    for(int i = 0 ; i < numDrivers ; i++)
    {
        time=0.0;
        for(int j = 0 ; j < numLaps ; j++)
        {
            time = time + arr[i][j];
           
        }
       

       if(numofTeams==2)
       {
           numofTeams=0;
           teamNumber++;
       }

       driversResults[res].driver = numofTeams+1;
       driversResults[res].team = teamNumber;
       driversResults[res].time = time;
       res++;
       numofTeams++;
       
    }
    double teamtime=0; 

    for(int i = 0 ; i< numDrivers ; i++)
    {
        double teamtime=0.0; 
        if(i+1<numDrivers)
        if(driversResults[i].team==driversResults[i+1].team)
        {
            teamtime=driversResults[i].time+driversResults[i+1].time;

            driversResults[i].TeamTime = teamtime;
            driversResults[i+1].TeamTime= teamtime;

            cout<<"Team " + driversResults[i].team <<endl;
            cout<<"Time: "+ static_cast<int>(teamtime)<<endl;
        }
    }
    //sort the teams 
   int n = numDrivers;
   int i, j;  
    for (i = 0; i < n-1; i++)       
    for (j = 0; j < n-i-1; j++)  
        if (driversResults[j].TeamTime > driversResults[j+1].TeamTime)  
            swap(&arr[j], &arr[j+1]); 

   for(int i = 0 ; i < numDrivers ; i++)
   {
       cout<<(i+1) + "Place is:"<<endl;
       cout<<"Team " + driversResults[i].team <<endl;
       cout<<"Time: "+ static_cast<int>(driversResults[i].TeamTime)<<endl;
       i++;
   }


}

void swap(double **xp, double **yp)  
{  
    double temp = **xp;  
    **xp = **yp;  
    **yp = temp;  
}  
