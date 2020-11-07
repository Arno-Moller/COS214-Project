#ifndef CONSTRUCTORSCHAMPIONSHIP_H
#define CONSTRUCTORSCHAMPIONSHIP_H

#include "Championship.h"

using namespace std;

class ConstructorsChampionship:public Championship
{


public:
     ConstructorsChampionship(double** array , int drivers , int laps);
    ~ConstructorsChampionship();

    void calculate();
};

#endif // CONSTRUCTORSCHAMPIONSHIP_H