#include "Rainy.h"

Rainy::Rainy()
{
    this->setWeather("Rainy");
}

Weather* Rainy::changeWeather() 
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
        Weather* w = new Sunny();
        w->setWeather("Sunny");
        return w;
    }
} 
