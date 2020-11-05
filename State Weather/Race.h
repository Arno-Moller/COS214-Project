#ifndef Race_h
#define Race_h

#include <iostream>

#include "Weather.h"
#include "Sunny.h"
#include "Rainy.h"
#include "Cloudy.h"

using namespace std;
// context participant of the state design pattern 
class Race
{
    public:
        Race(string Location); // constructor with the location of the race 
        ~Race(); // destructor 
        void change(); // change the state of the weather 
        string getWeather(); // returns the weather 
        void setWeather(Weather*); // sets the state of the weather 

    private:
        Weather* weather; // state of the weather 
        string location; // location of the race 
};
#endif
