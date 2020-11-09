#ifndef CHANGETIRES_H
#define CHANGETIRES_H

#include "PitStop.h"
#include "../CarComposite/Tire.h"
#include "../TireState/TireState.h"


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