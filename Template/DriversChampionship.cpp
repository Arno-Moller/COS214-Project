#include "DriversChampionship.h"


DriversChampionship::DriversChampionship(Team** t, double** array , int drivers , int laps ):Championship(t, array , drivers , laps)
{
    
}

DriversChampionship::~DriversChampionship() 
{
    
}

void DriversChampionship::print()
{
    cout << "============================================" << endl << endl;
    cout << "              Drivers CUP              "  << endl << endl;
    cout << "============================================" << endl << endl;

    for(int i = 0 ; i < numDrivers ; i++)
    {
        //int hours = (int)driversResults[i].time/3600;
        //int min = ((int)driversResults[i].time%3600)/60;
        //int seconds = ((int)driversResults[i].time%3600)%60/60;

        cout << "********************************************"  << endl << endl;
        cout << "\tIn place " << i+1 << " :" 
                <<"\n\t\tTeam " << driversResults[i].teamName 
                <<"\n\t\tDriver nr" << driversResults[i].driver  << endl;
        cout << "\t\tTime: " << driversResults[i].time << "s" << endl;

        cout  << endl;
    }  

    cout << "********************************************"  << endl << endl << endl << endl;

}