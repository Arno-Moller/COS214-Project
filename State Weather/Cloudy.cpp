#include "Cloudy.h"

Cloudy::Cloudy()
{
    this->setWeather("Cloudy");
}

Weather* Cloudy::changeWeather() 
{
    int chance = rand() % 100 + 1;

    if(chance < 50)
    {
        Weather* w = new Sunny();
        w->setWeather("Sunny");
        return w;
    }
    else
    {
        Weather* w = new Rainy();
        w->setWeather("Rainy");
        return w;
    }
} 