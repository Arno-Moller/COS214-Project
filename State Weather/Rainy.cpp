#include "Rainy.h"

void Rainy::changeWeather(Race* r) 
{
    r->setWeather(new Sunny());
} 

string Rainy::getWeather() 
{
    return "Rainy";
}