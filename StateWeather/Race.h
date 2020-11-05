#ifndef Race_h
#define Race_h

#include <iostream>

#include "Weather.h"
#include "Sunny.h"
#include "Rainy.h"
#include "Cloudy.h"

using namespace std;
/// context participant of the state design pattern 
class Race
{
    public:
        /**
        * Constructor that sets the location of the race
        * @param location of the race 
        */
        Race(string Location); 
        
        
        ~Race(); /// destructor 
        
        /**
        * Changes the state of the weather depending on random conditions
        */
        void change();

        /**
        * get method to get the state of the weather 
        * @return the weather 
        */
        string getWeather(); /// returns the weather 

         /**
        * get method to get the state of the weather 
        * @param weather pointer to set the weather state 
        */
        void setWeather(Weather*);  

    private:
        Weather* weather; /**< the weather state present in the race */ 
        string location; /**< the location of the race to ientify each race  */ 
};
#endif
