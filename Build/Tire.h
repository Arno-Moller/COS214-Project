#ifndef TIRE_H
#define TIRE_H

#include <iostream>
#include <stdio.h>
#include <ctime>

#include "RaceCar.h"
#include "SoftCompound.h"
#include "MediumCompound.h"
#include "HardCompound.h"
#include "GoodCondition.h"
#include "TireState.h"
#include "ChangeTires.h"

using namespace std;
/**
 * @brief concrete subject participant of the observer design pattern. The context participant of the State design Pattern 
 * 
 */
/// concrete subject participant of the observer design pattern 
//The context participant of the State design Pattern 
class Tire: public RaceCar
{   
    public:
        Tire(); /// default constructor 

        /**
        * @brief Constructor Taking in a tire state and the type of tire
        * @param tireState 
        * @param type
        */
        Tire(TireState* tState, TireCompound* type);//constructor taking in a tire state and a type of tire 
        
        /**
        * @brief Constructor taking in  the type of tire
        * @param type
        */
        Tire(string type); // Constructor to set 
       
        ~Tire();///destructor

         /**
        * @brief Clone function that returns a clone of the current Race Car 
        * @return a clone of the the Race Car
        */
        RaceCar* clone();

        /**
         * @brief Get the State object
         * 
         * @return TireState* 
         */
        TireState*  getState();// returns the state of the tires. 

        /**
         * @brief Set the State object
         * 
         * @param tState 
         */
        void setState(TireState* tState);//sets the state of the tires

        /**
         * @brief Set the Type object
         * 
         * @param type 
         */
        void setType(string type);

        /**
         * @brief Set the Type object
         * 
         * @param type 
         */
        void setType(TireCompound* type);

        /**
         * @brief let the car lap
         * 
         */
        void lap();
        
        /**
         * @brief degrades the tires
         * 
         */
        void degrade();// degrades the tires

        /**
         * @brief Get the Grip object
         * 
         * @return int 
         */
        int getGrip();

        /**
         * @brief Set the Grip object
         * 
         * @param grip 
         */
        void setGrip(int grip);

        /**
         * @brief Get the Wear object
         * 
         * @return int 
         */
        int getWear();

        /**
         * @brief Set the Wear object
         * 
         * @param wear 
         */
        void setWear(int wear);

        /**
         * @brief Get the Rate object of the tire compounds
         * 
         * @return double 
         */
        double getRate();

        /**
         * @brief Get the Next Tire Compound object
         * 
         * @return string 
         */
        string getNextTireCompound();

    private:
        TireState* state = nullptr; /// The state of the tires object to check the tires condition 
        string currentCompound = "";
        string newCompound = "";
};
#endif