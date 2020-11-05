#include "HardCompound.h"

HardCompound::HardCompound() 
{
    setGrip(60);
    setWear(0);
    rate = 1;
}

HardCompound::~HardCompound() 
{
    
}

int HardCompound::getGrip() 
{
    return grip;
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

