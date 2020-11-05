#ifndef CHANGETIRES_H
#define CHANGETIRES_H

#include "PitStop.h"
#include "Tire.h"
#include "TireState.h"
// #include "Strategy.h"


class ChangeTires: public PitStop
{
private:
    Tire* carTire;
    TireState* state;
public:
    ChangeTires(Tire* carTire);
    ~ChangeTires();

    void update();
};

#endif // CHANGETIRES_H