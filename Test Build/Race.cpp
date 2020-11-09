#include "Race.h"

Race::Race(string l) 
{   
    location = l;
    
    int chance = rand() % 100 + 1;

    if(chance < 33)
    {
        weather = new Sunny();
    }
    else if(chance < 66)
    {
        weather = new Cloudy();
    }
    else
    {
        weather = new Rainy();
    }
}

Race::~Race() 
{
    delete weather;
    weather = nullptr;
}

void Race::change() 
{
    int chance = rand() % 100 + 1;

    if(chance < 30)
    {
        weather = weather->changeWeather();
    }
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