#ifndef DRIVERSCHAMPIONSHIP_H
#define DRIVERSCHAMPIONSHIP_H

#include "Championship.h"

using namespace std;

class DriversChampionship: public Championship
{

public:
    DriversChampionship(double** arr , int drivers , int laps);
    ~DriversChampionship();

    void calculate();
    void swap(double **xp, double **yp);
};

#endif // DRIVERSCHAMPIONSHIP_H