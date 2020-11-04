#ifndef CHANGETIRES_H
#define CHANGETIRES_H

#include "PitStop.h"
#include "Tire.h"

class ChangeTires: public PitStop
{
private:
    Tire* carTire;
public:
    ChangeTires(Tire* carTire);
    ~ChangeTires();

    void update();
};



#endif // CHANGETIRES_H