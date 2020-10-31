#include "TrackSection.h"

TrackSection::TrackSection(string n , int r, int d) 
{
    name = n; 
    riskValue = r;
    distance = d;
}

string TrackSection::getName() 
{
    return name;
}

int TrackSection::getRiskValue() 
{
    return riskValue;
}

int TrackSection::getDistance() 
{
    return distance;
}