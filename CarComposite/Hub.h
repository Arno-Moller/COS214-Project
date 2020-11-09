#ifndef HUB_H
#define HUB_H

#include <iostream>
#include "RaceCar.h"

using namespace std;
/**
 * @brief leaf participant of the Composite Design pattern
 * 
 */
//leaf participant of the Composite Design pattern 
class Hub : public RaceCar
{
    public:
        /**
         * @brief Construct a new Hub object
         * 
         */
        Hub();//constructor

        /**
         * @brief Destroy the Hub object
         * 
         */
        ~Hub();//destructor

        /**
         * @brief degrade the hub
         * 
         */
        void degrade();//degrade method

        /**
        * @brief Clone function that returns a clone of the current Race Car 
        * 
        * @return a clone of the the Race Car
        */
        RaceCar* clone();

};

#endif