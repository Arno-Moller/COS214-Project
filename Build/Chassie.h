#ifndef CHASSIE_H
#define CHASSIE_H

#include <iostream>
#include "RaceCar.h"

using namespace std;
/**
 * @brief leaf participant of the Composite Design Pattern
 * 
 */
//leaf participant of the Composite Design Pattern 
class Chassie : public RaceCar
{
    public:
        /**
         * @brief Construct a new Chassie object
         * 
         */
        Chassie();//constructor 

        /**
         * @brief Destroy the Chassie object
         * 
         */
        ~Chassie();//destructor 

        /**
        * @brief Clone function that returns a clone of the current Race Car 
        * 
        * @return a clone of the the Race Car
        */
        RaceCar* clone();

        /**
         * @brief degrade the chassie
         * 
         */
        void degrade();//degrade method 

};

#endif