#include "MediumCompound.h"

MediumCompound::MediumCompound() 
{
    setGrip(100);
    setWear(1);
    rate = 2;
}

MediumCompound::~MediumCompound() 
{
    
}

int MediumCompound::getGrip() 
{
    return grip*rate*0.01 + 1;
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
    return rate;
}


