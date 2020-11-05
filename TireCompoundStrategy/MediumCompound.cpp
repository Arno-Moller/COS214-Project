#include "MediumCompound.h"

MediumCompound::MediumCompound() 
{
    setGrip(70);
    setWear(0);
    setRate(2);
}

MediumCompound::~MediumCompound() 
{
    
}

int MediumCompound::getGrip() 
{
    return grip;
}

void MediumCompound::setGrip(int grip) 
{
    this->grip = grip;
}

int MediumCompound::getWear() 
{
    return wear;
}

void MediumCompound::setWear(int wear) 
{
    this->wear = wear;
}

int MediumCompound::getRate() 
{
    return rate*getWear();
}

void MediumCompound::setRate(int rate) 
{
    this->rate = rate;
}
