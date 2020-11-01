#include "SlightTurn.h"

SlightTurn::SlightTurn(int r, int d) 
{
    name = "SlightTurn"; 
    riskValue = r;
    distance = d;
}

string SlightTurn::getName() 
{
    return name;
}

int SlightTurn::getRiskValue() 
{
    return riskValue;
}

int SlightTurn::getDistance() 
{
    return distance;
}