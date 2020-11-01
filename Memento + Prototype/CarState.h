#ifndef CARSTATE_H
#define CARSTATE_H

#include "RaceCar.h"

class CarState
{
private:
    RaceCar* car;
public:
    CarState(RaceCar* car);
    ~CarState();

    RaceCar* getCarState();
};



#endif // CARSTATE_H