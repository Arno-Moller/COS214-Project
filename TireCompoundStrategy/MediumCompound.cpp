#include "MediumCompound.h"

MediumCompound::MediumCompound() 
{
    setGrip(100);
    setWear(1);
    rate = 6;
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
    return rate;
}

TireCompound* MediumCompound::clone() 
{
    return new MediumCompound();
}


