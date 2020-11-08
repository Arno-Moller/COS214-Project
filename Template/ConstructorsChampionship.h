#ifndef CONSTRUCTORSCHAMPIONSHIP_H
#define CONSTRUCTORSCHAMPIONSHIP_H

#include "Championship.h"
#include <iostream>

using namespace std;

class ConstructorsChampionship:public Championship
{
public:
    ConstructorsChampionship(Team** t, double** array , int drivers , int laps);
    ~ConstructorsChampionship();

    void print();
};

#endif // CONSTRUCTORSCHAMPIONSHIP_H