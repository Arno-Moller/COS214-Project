#ifndef MEDIUMCOMPOUND_H
#define MEDIUMCOMPOUND_H

#include "TireCompound.h"

using namespace std;
// concrete strategy participant from the strategy design pattern 
class MediumCompound: public TireCompound
{
private:
    /* data */
public:
    MediumCompound();//constructor 
    ~MediumCompound(); // destructor 

    int getGrip(); // returns  the grip of the tire 
    void setGrip(int grip); // sets the grip of the tir e
    int getWear();// returns the wear of the tire 
    void setWear(int wear); // sets the wear of the tire 
    int getRate(); // returns the rate at wich the tire wears 
    void setRate(int rate); // sets the rate at wich the tire wears 
};
#endif // MEDIUMCOMPOUND_H