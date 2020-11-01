#include "S_Section.h"

S_Section::S_Section(int r, int d) 
{
    name = "S_Section"; 
    riskValue = r;
    distance = d;
}

string S_Section::getName() 
{
    return name;
}

int S_Section::getRiskValue() 
{
    return riskValue;
}

int S_Section::getDistance() 
{
    return distance;
}