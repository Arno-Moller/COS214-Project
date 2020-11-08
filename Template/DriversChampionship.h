#ifndef DRIVERSCHAMPIONSHIP_H
#define DRIVERSCHAMPIONSHIP_H

#include "Championship.h"

using namespace std;

class DriversChampionship: public Championship
{

public:
    DriversChampionship(Team** t, double** arr , int drivers , int laps);
    ~DriversChampionship();

    void calculate();
    void calculateResults();
    void swap(double **xp, double **yp);
};

#endif // DRIVERSCHAMPIONSHIP_H