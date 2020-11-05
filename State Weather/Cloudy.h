#ifndef Cloudy_h
#define Cloudy_h

#include <iostream>

#include "Weather.h"
#include "Race.h"

#include "Sunny.h"
#include "Rainy.h"

using namespace std;

class Cloudy : public Weather
{
    public:
        Cloudy();
        virtual Weather* changeWeather(); 
};

#endif
