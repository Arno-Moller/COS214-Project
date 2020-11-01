#include "NinetyDegreeTurn.h"

NinetyDegreeTurn::NinetyDegreeTurn(int r, int d) 
{
    name = "NinetyDegreeTurn"; 
    riskValue = r;
    distance = d;
}

string NinetyDegreeTurn::getName() 
{
    return name;
}

int NinetyDegreeTurn::getRiskValue() 
{
    return riskValue;
}

int NinetyDegreeTurn::getDistance() 
{
    return distance;
}