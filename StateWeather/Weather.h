#ifndef Weather_h
#define Weather_h

#include <iostream>


using namespace std;
///state partiipant of the state design pattern 
class Weather
{
    public:
        Weather();///constructor

        /**
        * abstract interface to change the weather state 
        * @return the weather state as it has changed.  
        */
        virtual Weather* changeWeather() = 0;  

        /**
        * Checks if the race car should pit 
        * @return the string of the weather 
        */
        string getWeather();  

        /**
        *  sets the weather 
        * @param weather string that takes in the whether of the day default weather of sunny
        */
        void setWeather(string);  

    private:
        string weather; /**< the weather present the day of racing  */ 
        int riskValue; /**< the risk value associated with the different weather */ 
};

#endif
