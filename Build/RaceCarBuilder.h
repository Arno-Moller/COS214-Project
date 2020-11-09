#ifndef RACECARBUILDER_H
#define RACECARBUILDER_H

#include <iostream>
#include "RaceCar.h"

using namespace std;
//The Builder participant of The BUilder Design Pattern
/**
 * @brief The Builder participant of The BUilder Design Pattern
 * 
 */
class RaceCarBuilder
{
    public:
		/**
		 * @brief Construct a new Race Car Builder object
		 * 
		 */
        RaceCarBuilder();//Constructor 

		/**
		 * @brief Destroy the Race Car Builder object
		 * 
		 */
        ~RaceCarBuilder();//Destructor

		/**
		 * @brief add the chassis to the car
		 * 
		 */
		virtual void addChassis() = 0;//abstract interface for the builder of the cars 

		/**
		 * @brief add the suspension
		 * 
		 */
		virtual void addSuspension() = 0; // adds suspension to the Race Car 

		/**
		 * @brief add the wing to the car
		 * 
		 */
		virtual void addWing() = 0; //adds wing to the Race Car

		/**
		 * @brief add the hub to the car
		 * 
		 */
		virtual void addHub() = 0; // adds a hub to the Race car

		/**
		 * @brief add the engine to the car
		 * 
		 */
		virtual void addEngine() = 0; // adds a Engine to the Race Car

		/**
		 * @brief add the tire to the car
		 * 
		 */
		virtual void addTire(string) = 0; // adds Tires

		/**
		 * @brief Get the Car object
		 * 
		 * @return RaceCar* 
		 */
		virtual RaceCar* getCar() = 0; // returns the Race CAr
    
};

#endif