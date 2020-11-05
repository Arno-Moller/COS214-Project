#ifndef SOFTCOMPOUND_H
#define SOFTCOMPOUND_H

#include "TireCompound.h"

using namespace std;
/// concrete strategy participant of the strategy design pattern 
class SoftCompound: public TireCompound
{
    
public:
    SoftCompound(); /// constructor 
    ~SoftCompound(); /// destructor 

    int getGrip(); /// returns the grip of the tire 
    void setGrip(int grip); /// sets the grip of the tire 
    int getWear(); /// returns  the wear of the tire 
    void setWear(int wear); /// sets the wear of the tire 
    double getRate(); /// returns the rate at wich the tire wears 
    
};



#endif // SOFTCOMPOUND_H