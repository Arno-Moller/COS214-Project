#include "SoftCompound.h"

SoftCompound::SoftCompound() 
{
    setGrip(100);
    setWear(1);
    rate = 3;
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

double SoftCompound::getRate() 
{
    return rate;
}

TireCompound* SoftCompound::clone() 
{
    return new SoftCompound();
}





