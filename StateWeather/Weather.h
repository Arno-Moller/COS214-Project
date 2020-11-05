#ifndef Weather_h
#define Weather_h

#include <iostream>


using namespace std;
//state partiipant of the state design pattern 
class Weather
{
    public:
        Weather();//constructor
        virtual Weather* changeWeather() = 0; //abstract interface to change the weather state 
        string getWeather(); // returns the weather 
        void setWeather(string); // sets the weather 

    private:
        string weather; // the weather 
        int riskValue; // teh risk value associated with the weather 
};

#endif
