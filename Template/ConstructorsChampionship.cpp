#include "ConstructorsChampionship.h"



ConstructorsChampionship::ConstructorsChampionship(Team** t, double** array , int drivers , int laps):Championship(t, array , drivers , laps)
{
     
}

ConstructorsChampionship::~ConstructorsChampionship() 
{
    
} 

void ConstructorsChampionship::print()
{
    cout << "============================================" << endl << endl;
    cout << "              Constructors CUP              "  << endl << endl;
    
    for(int i = 0 ; i < numDrivers/2 ; i++)
    {
        cout << "********************************************" << endl << endl;

        cout << "In place " << i+1 << " :" << endl;
        cout <<"\tTeam " << teamResults[i].teamName << ""
                << "\n\t\t" << teamResults[i].teamObject->getCarOne()->getName() << " points: " << teamResults[i].driver1Points  
                << "\n\t\t" << teamResults[i].teamObject->getCarTwo()->getName() << " points: " << teamResults[i].driver2Points
                << "\n\t\tTotal team points: " << teamResults[i].TeamPoints << endl;
        cout  << endl;
    }    

    cout << "********************************************" << endl << endl << endl << endl;

}