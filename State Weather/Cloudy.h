#ifndef Cloudy_h
#define Cloudy_h

#include <iostream>

#include "Weather.h"
#include "Race.h"

#include "Sunny.h"
#include "Rainy.h"

using namespace std;
//concrete state participant of the state participant 
class Cloudy : public Weather
{
    public:
        Cloudy();//constructor 
        virtual Weather* changeWeather(); // method to change the state of the weather 
};

#endif
