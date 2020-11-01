#ifndef MEMENTO_H
#define MEMENTO_H

#include "CarState.h"
#include "RaceCar.h"

class Memento
{
private:
    CarState* state;

public:
    Memento(RaceCar* car);
    ~Memento();

    RaceCar* getState();
    void setState(RaceCar* car);
};


#endif // MEMENTO_H