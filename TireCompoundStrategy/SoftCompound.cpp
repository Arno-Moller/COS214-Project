#include "SoftCompound.h"

SoftCompound::SoftCompound() 
{
    setGrip(80);
    setWear(0);
    setRate(3);
}

SoftCompound::~SoftCompound() 
{
    
}

int SoftCompound::getGrip() 
{
    return grip;
}

void SoftCompound::setGrip(int grip) 
{
    this->grip = grip;
}

int SoftCompound::getWear() 
{
    return wear;
}

void SoftCompound::setWear(int wear) 
{
    this->wear = wear;
}

int SoftCompound::getRate() 
{
    return rate;
}

void SoftCompound::setRate(int rate) 
{
    this->rate = rate;
}




