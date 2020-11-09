#ifndef CONSTRUCTORSCHAMPIONSHIP_H
#define CONSTRUCTORSCHAMPIONSHIP_H

#include "Championship.h"
#include <iostream>

using namespace std;

class ConstructorsChampionship:public Championship
{
public:

    /**
    * Constructor 
    * @param Team 
    * @param array of the times for each lap 
    * @param drivers amount
    * @param laps amount
    */
    ConstructorsChampionship(Team** t, double** array , int drivers , int laps);
    ~ConstructorsChampionship();

    void print();
};

#endif // CONSTRUCTORSCHAMPIONSHIP_H