#ifndef DRIVERSCHAMPIONSHIP_H
#define DRIVERSCHAMPIONSHIP_H

#include "Championship.h"

using namespace std;

class DriversChampionship: public Championship
{

public:

    /**
    * Constructor 
    * @param Team 
    * @param array of the times for each lap 
    * @param drivers amount
    * @param laps amount
    */
    DriversChampionship(Team** t, double** arr , int drivers , int laps);
    
    ~DriversChampionship();///destructor


    /**
    *Prints out the results of the race for each driver
    */
    void print();
};

#endif // DRIVERSCHAMPIONSHIP_H