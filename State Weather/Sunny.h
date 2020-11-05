#ifndef Sunny_h
#define Sunny_h

#include <iostream>

#include "Weather.h"
#include "Race.h"

#include "Rainy.h"
#include "Cloudy.h"

using namespace std;

class Sunny : public Weather
{
    public:
        Sunny();
        virtual Weather* changeWeather(); 
};

#endif
