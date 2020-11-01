#include "Straight.h"

Straight::Straight(int r, int d) 
{
    name = "Straight"; 
    riskValue = r;
    distance = d;
}

string Straight::getName() 
{
    return name;
}

int Straight::getRiskValue() 
{
    return riskValue;
}

int Straight::getDistance() 
{
    return distance;
}