#include "Cloudy.h"

void Cloudy::changeWeather(Race* r) 
{
    r->setWeather(new Cloudy());
} 

string Cloudy::getWeather() 
{
    return "Cloudy";
}