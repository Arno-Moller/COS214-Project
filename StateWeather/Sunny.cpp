#include "Sunny.h"

Sunny::Sunny()
{
    this->setWeather("Sunny");
}

Weather* Sunny::changeWeather() 
{
    int chance = rand() % 100 + 1;

    if(chance < 50)
    {
        Weather* w = new Cloudy();
        w->setWeather("Cloudy");
        return w;
    }
    else
    {
        Weather* w = new Rainy();
        w->setWeather("Rainy");
        return w;
    }
} 
