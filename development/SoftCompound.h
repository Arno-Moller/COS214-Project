#ifndef SOFTCOMPOUND_H
#define SOFTCOMPOUND_H

#include "TireCompound.h"

using namespace std;

class SoftCompound: public TireCompound
{
private:
    /* data */
public:
    SoftCompound();
    ~SoftCompound();

    int getGrip();
    void setGrip(int grip);
    int getWear();
    void setWear(int wear);
    int getRate();
    void setRate(int rate);
};



#endif // SOFTCOMPOUND_H