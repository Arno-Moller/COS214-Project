#ifndef Rainy_h
#define Rainy_h

#include <iostream>

#include "Weather.h"
#include "Race.h"

#include "Sunny.h"
#include "Cloudy.h"

using namespace std;
///concrete state participant of the state participant 
class Rainy : public Weather
{
    public:
        Rainy();  /// constructor 

        /**
        *  method to change the state of the weather
        * @return the weather state as it has changed.  
        */
        virtual Weather* changeWeather(); 
       
};

#endif
