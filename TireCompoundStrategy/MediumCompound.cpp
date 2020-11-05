#include "MediumCompound.h"

MediumCompound::MediumCompound() 
{
    setGrip(80);
    setWear(0);
    rate = 2;
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

double MediumCompound::getRate() 
{
    return rate*getWear();
}


