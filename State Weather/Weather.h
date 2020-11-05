#ifndef Weather_h
#define Weather_h

#include <iostream>


using namespace std;
//state partiipant of the state design pattern 
class Weather
{
    public:
        Weather();
        virtual Weather* changeWeather() = 0; 
        string getWeather();
        void setWeather(string);

    private:
        string weather;
        int riskValue;
};

#endif
