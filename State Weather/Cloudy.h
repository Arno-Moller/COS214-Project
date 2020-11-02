#ifndef Cloudy_h
#define Cloudy_h

#include <iostream>

#include "Race.h"

#include "Weather.h"

#include "Sunny.h"
#include "Rainy.h"

using namespace std;

class Cloudy : public Weather
{
    public:
        virtual void changeWeather(Race* r) ; 
        virtual string getWeather();

    private:

};

#endif
