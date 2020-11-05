#include "Weather.h"

Weather::Weather()  {}

string Weather::getWeather() 
{
    return weather;
}

void Weather::setWeather(string w) 
{
    weather = w;
}