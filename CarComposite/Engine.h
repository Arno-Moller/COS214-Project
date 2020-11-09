#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include "RaceCar.h"

using namespace std;
/**
 * @brief leaf participant of the Composite design Pattern
 * 
 */
// leaf participant of the Composite design Pattern 
class Engine : public RaceCar
{
    public:
        /**
         * @brief Construct a new Engine object
         * 
         */
        Engine();//constructor 

        /**
         * @brief Destroy the Engine object
         * 
         */
        ~Engine();//destructor

        /**
         * @brief degrade the engine
         * 
         */
        void degrade();//degrade method 

        /**
        * @brief Clone function that returns a clone of the current Race Car 
        * 
        * @return a clone of the the Race Car
        */
        virtual RaceCar* clone();

};

#endif