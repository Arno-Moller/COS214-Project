#ifndef MEMENTO_H
#define MEMENTO_H

#include "TeamState.h"
#include "RaceCar.h"
#include "Team.h"

class Memento
{
private:
    TeamState* state;

public:
    Memento(Team* team);
    Memento(RaceCar* carOne, RaceCar* carTwo);
    ~Memento();

    TeamState* getState();
    void setState(Team* team);
    void setState(RaceCar* carOne, RaceCar* carTwo);
};


#endif // MEMENTO_H