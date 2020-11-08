#include "DriversChampionship.h"


DriversChampionship::DriversChampionship(double** array , int drivers , int laps ):Championship(array , drivers , laps)
{
    
}

DriversChampionship::~DriversChampionship() 
{
    
}

void DriversChampionship::calculate() 
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
   
   //sort the teams 
   int n = numDrivers;
   int i, j;  
    for (i = 0; i < n-1; i++)       
    for (j = 0; j < n-i-1; j++)  
        if (driversResults[j].time > driversResults[j+1].time)  
            swap(&arr[j], &arr[j+1]); 


     for(int i = 0 ; i < numDrivers ; i++)
   {
       int place=1;
       cout<< place << "Place is:"<<endl;
       cout<<"Team " << driversResults[i].driver <<endl;
       cout<<"Time: "<< static_cast<int>(driversResults[i].time)<<endl;
       
       place++;
   }       

}
void swap(double **xp, double **yp)
{
   double temp = **xp;  
    **xp = **yp;  
    **yp = temp;   
}


