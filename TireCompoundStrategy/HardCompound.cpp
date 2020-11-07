#include "HardCompound.h"

HardCompound::HardCompound() 
{
    setGrip(100);
    setWear(1);
    rate = 1;
}

HardCompound::~HardCompound() 
{
    
}

int HardCompound::getGrip() 
{
    return grip*rate;
}

void HardCompound::setGrip(int grip) 
{
    this->grip = grip;
}

int HardCompound::getWear() 
{
    return wear;
}

void HardCompound::setWear(int wear) 
{
    this->wear = wear;
}

double HardCompound::getRate() 
{
    return rate*getWear();
}

