#ifndef MEDIUMCOMPOUND_H
#define MEDIUMCOMPOUND_H

#include "TireCompound.h"

using namespace std;

class MediumCompound: public TireCompound
{
private:
    /* data */
public:
    MediumCompound();
    ~MediumCompound();

    int getGrip();
    void setGrip(int grip);
    int getWear();
    void setWear(int wear);
    int getRate();
    void setRate(int rate);
};
#endif // MEDIUMCOMPOUND_H