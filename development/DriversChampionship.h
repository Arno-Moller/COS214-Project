#ifndef DRIVERSCHAMPIONSHIP_H
#define DRIVERSCHAMPIONSHIP_H

#include "Championship.h"

using namespace std;

class DriversChampionship: public Championship
{
private:
    /* data */
public:
    DriversChampionship();
    ~DriversChampionship();

    void start();
    void restart();
    void stop();
};

#endif // DRIVERSCHAMPIONSHIP_H