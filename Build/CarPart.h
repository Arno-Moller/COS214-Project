#ifndef CARPART_H
#define CARPART_H

#include <iostream>
#include <list>
#include "RaceCar.h"
#include "Tire.h"

using namespace std;
/**
 * @brief the composite participant of the Composite Design Pattern
 * 
 */
//the composite participant of the Composite Design Pattern 
class CarPart: public RaceCar
{
    public:
        /**
         * @brief Construct a new Car Part object
         * 
         */
        CarPart();//constructor 
        
        /**
         * @brief Construct a new Car Part object
         * 
         */
        CarPart(CarPart&);

        /**
         * @brief Destroy the Car Part object
         * 
         */
        ~CarPart();//destructor 

        /**
         * @brief Creates a clone of CarPart and return it as RaceCar object
         * 
         * @return RaceCar* 
         */
        RaceCar* clone();

        /**
         * @brief add a part of the racecar to CarPart 
         * 
         * @param part 
         */
        void addPart(RaceCar* part);// adds a part to the race car 

        /**
         * @brief removes a part from the CarPart list
         * 
         * @param part 
         */
        void removePart(RaceCar* part);// removes a part from the race car

        /**
         * @brief Get the Part object
         * 
         * @return RaceCar* 
         */
        RaceCar* getPart(); // returns the race car 
        
        /**
         * @brief Get the Car Parts object
         * 
         * @return list<RaceCar*> 
         */
        list<RaceCar*> getCarParts();

        /**
         * @brief calls the lap function of the tire part
         * 
         */
	    void lap();// does a lap 

        /**
         * @brief calls the 
         * 
         */
        void degrade(); 

        /**
         * @brief adds the tire part
         * 
         * @param part 
         */
        void addCarTire(RaceCar* part);

        /**
         * @brief Get the Car Tire object
         * 
         * @return RaceCar* 
         */
        RaceCar*  getCarTire();

        /**
         * @brief Get the Tire Grip object
         * 
         * @return int 
         */
        int getTireGrip();

        /**
         * @brief Get the driverName object
         * 
         * @return string 
         */
        string getName();

        /**
         * @brief Set the driverName object
         * 
         * @param name 
         */
        void setName(string name);

        /**
         * @brief Get the Points object
         * 
         * @return int 
         */
        int getPoints();

        /**
         * @brief Set the Points object
         * 
         * @param points 
         */
        void setPoints(int points);

        /**
         * @brief Set the Print object
         * 
         * @param shouldItPrint 
         */
        void setPrint(bool shouldItPrint);

        /**
         * @brief Get the Print object
         * 
         * @return true 
         * @return false 
         */
        bool getPrint();

    protected:
        list<RaceCar*> parts;/// a list of all the Race Car parts
        RaceCar* tire;/// the tire of the car

};

#endif