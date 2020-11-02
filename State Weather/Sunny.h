#ifndef Sunny_h
#define Sunny_h

#include <iostream>

#include "Race.h"

#include "Weather.h"

#include "Rainy.h"
#include "Cloudy.h"

using namespace std;

class Sunny : public Weather
{
    public:
        virtual void changeWeather(Race* r) ; 
        virtual string getWeather();

    private:

};

#endif
