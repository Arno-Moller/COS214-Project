#include "Race.h"

Race::Race() 
{   
    weather = new Sunny();
}

Race::~Race() 
{
    delete weather;
    weather = nullptr;
}

void Race::change() 
{
    weather->changeWeather(this);
}

string Race::getWeather() 
{
    return weather->getWeather();
}

void Race::setWeather(Weather* w) 
{
    delete weather;
    weather = w;
}