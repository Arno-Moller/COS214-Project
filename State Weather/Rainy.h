#ifndef Rainy_h
#define Rainy_h

#include <iostream>

#include "Race.h"

#include "Weather.h"

#include "Sunny.h"
#include "Cloudy.h"

using namespace std;

class Rainy : public Weather
{
    public:
        virtual void changeWeather(Race* r); 
        virtual string getWeather();

    private:

};

#endif
