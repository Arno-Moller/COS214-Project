#ifndef HARDCOMPOUND_H
#define HARDCOMPOUND_H

#include "TireCompound.h"

using namespace std;
///concrete strategy participant of the strategy design pattern 
class HardCompound: public TireCompound
{

public:
    HardCompound();/// constructor 
    ~HardCompound(); /// destructor 

    int getGrip(); /// returns the grips of the tire 
    void setGrip(int grip); /// sets the grip of the tire 
    int getWear(); /// returns the wear of the tires 
    void setWear(int wear);/// set the wear of the tire 
    double getRate(); /// returns the rate at wich the tire wears 
    
};

#endif // HARDCOMPOUND_H