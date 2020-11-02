#include "Sunny.h"

void Sunny::changeWeather(Race* r) 
{
    r->setWeather(new Sunny());
} 

string Sunny::getWeather() 
{
    return "Sunny";
}