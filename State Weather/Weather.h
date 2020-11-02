#ifndef Weather_h
#define Weather_h

#include <iostream>

#include "Race.h"

#include "Sunny.h"
#include "Rainy.h"
#include "Cloudy.h"

using namespace std;

class Weather
{
    public:
        virtual void changeWeather(Race* r) = 0; 
        virtual string getWeather() = 0;
        virtual ~Weather();
};

#endif
