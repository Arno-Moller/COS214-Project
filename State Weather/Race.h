#ifndef Race_h
#define Race_h

#include <iostream>

#include "Weather.h"
#include "Sunny.h"
#include "Rainy.h"
#include "Cloudy.h"

using namespace std;

class Race
{
    public:
        Race(string Location);
        ~Race();
        void change();
        string getWeather();
        void setWeather(Weather*);

    private:
        Weather* weather;
        string location;
};
#endif
