#ifndef Race_h
#define Race_h

#include <iostream>

#include "Weather.h"

using namespace std;

class Race
{
    public:
        Race();
        ~Race();
        void change();
        string getWeather();
        void setWeather(Weather*);

    private:
        Weather* weather;

};
#endif
