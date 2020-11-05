#ifndef Sunny_h
#define Sunny_h

#include <iostream>

#include "Weather.h"
#include "Race.h"

#include "Rainy.h"
#include "Cloudy.h"

using namespace std;
//concrete state participant of the state participant 
class Sunny : public Weather
{
    public:
        Sunny(); // constructor 
        virtual Weather* changeWeather(); // method to change the state of the weather 
};

#endif
