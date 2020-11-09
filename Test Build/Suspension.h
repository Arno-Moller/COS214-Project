#ifndef SUSPENSION_H
#define SUSPENSION_H

#include <iostream>
#include "RaceCar.h"

using namespace std;
/**
 * @brief The leaf participant of the composite Design Pattern 
 * 
 */
// The leaf participant of the composite Design Pattern 
class Suspension : public RaceCar
{
    public:
        /**
         * @brief Construct a new Suspension object
         * 
         */
        Suspension();//constructor 

        /**
         * @brief Destroy the Suspension object
         * 
         */
        ~Suspension();//destructor

        /**
         * @brief call the degrade method
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