#include "Hairpin.h"

Hairpin::Hairpin(int r, int d) 
{
    name = "Hairpin"; 
    riskValue = r;
    distance = d;
}

string Hairpin::getName() 
{
    return name;
}

int Hairpin::getRiskValue() 
{
    return riskValue;
}

int Hairpin::getDistance() 
{
    return distance;
}