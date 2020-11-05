#ifndef HARDCOMPOUND_H
#define HARDCOMPOUND_H

#include "TireCompound.h"

using namespace std;

class HardCompound: public TireCompound
{
private:
    /* data */
public:
    HardCompound();
    ~HardCompound();

    int getGrip();
    void setGrip(int grip);
    int getWear();
    void setWear(int wear);
    int getRate();
    void setRate(int rate);
};

#endif // HARDCOMPOUND_H