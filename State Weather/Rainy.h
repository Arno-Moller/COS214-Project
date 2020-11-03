#ifndef Rainy_h
#define Rainy_h

#include <iostream>

#include "Weather.h"
#include "Race.h"

#include "Sunny.h"
#include "Cloudy.h"

using namespace std;

class Rainy : public Weather
{
    public:
        Rainy();
        virtual Weather* changeWeather(); 
};

#endif
