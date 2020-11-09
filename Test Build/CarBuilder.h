#ifndef CARBUILDER_H
#define CARBUILDER_H

#include <iostream>
#include "RaceCarBuilder.h"
#include "Tire.h"
#include "Chassie.h"
#include "Engine.h"
#include "Hub.h"
#include "Suspension.h"
#include "Wing.h"
#include "CarPart.h"

using namespace std;
/**
 * @brief this class is the Concrete Builder in the Builder design Pattern 
 * 
 */
///this class is the Concrete Builder in the Builder design Pattern 
class CarBuilder: public RaceCarBuilder
{
    public:
		/**
		 * @brief Construct a new Car Builder object
		 * 
		 */
        CarBuilder();/// constructor 

		/**
		 * @brief Destroy the Car Builder object
		 * 
		 */
        ~CarBuilder();/// destructor 

		/**
		 * @brief add the chassis to car
		 * 
		 */
        void addChassis();//adds a Chassis to the car 

		/**
		 * @brief add the suspension to the car
		 * 
		 */
		void addSuspension();// adds Suspension to the car 

		/**
		 * @brief add the wing to the car
		 * 
		 */
		void addWing();// adds wing to the car 

		/**
		 * @brief add the hub to the car
		 * 
		 */
		void addHub();// adds hub to the car 
		
		/**
		 * @brief add the engine to the car
		 * 
		 */
		void addEngine();// adds engine to the car 

		/**
		 * @brief add the tire to the car and defines starting tire compound
		 * 
		 * @param compound 
		 */
		void addTire(string compound);// adds tire to the car 

		/**
		 * @brief Get the Car object
		 * 
		 * @return RaceCar* 
		 */
		RaceCar* getCar(); // returns the car 

		/**
		 * @brief Get the Car Part object
		 * 
		 * @return CarPart* 
		 */
		CarPart* getCarPart();
    
	private:
		CarPart* car; /// an object of the car 
};

#endif