#ifndef RACECAR_H
#define RACECAR_H

#include <list>
#include <iostream>
#include "PitStop.h"
#include "Strategy.h"
#include "Sensible.h"
#include "Cautious.h"
#include "Aggressive.h"
#include "SoftCompound.h"
#include "MediumCompound.h"
#include "HardCompound.h"

using namespace std;
/**
 * @brief This class is the product participant of the Builder Design pattern. Subject participant of the observer design Pattern
 * 
 */

class RaceCar
{
    public:
        /**
         * @brief Construct a new Race Car object
         * 
         */
        RaceCar();//constructor

        /**
         * @brief Destroy the Race Car object
         * 
         */
        ~RaceCar();//destructor

        /**
         * @brief 
         * 
         */
        void request();

        /**
         * @brief //the method to do a lap
         * 
         */
        virtual void lap();//the method to do a lap

        /**
         * @brief Get the Child object
         * 
         * @return RaceCar* 
         */
        RaceCar* getChild(); // returns the child of the race car

        /**
         * @brief virtual function of the degrade method
         * 
         */
        virtual void degrade();//the degrade method 

        /**
         * @brief virtual method to add parts to the race car 
         * 
         * @param car 
         */
        virtual void addPart(RaceCar* car);// method to add parts to the race car 

        /**
         * @brief pure virtual function of the clone method that create a clone of the car
         * 
         * @return RaceCar* 
         */
        virtual RaceCar* clone() = 0;

        /**
         * @brief Get the Car Parts object
         * 
         * @return list<RaceCar*> 
         */
        virtual list<RaceCar*> getCarParts();

        /**
         * @brief attach observer
         * 
         * @param pitcrew 
         */
        void addPitcrew(PitStop* pitcrew);// attach Observer

        /**
         * @brief detach observer
         * 
         */
        void removePitCrew();// detach observer

        /**
         * @brief notify observer
         * 
         */
        void notify();// notify observer

        /**
         * @brief Get the Strategy object
         * 
         * @return Strategy* 
         */
        Strategy* getStrategy() const;

        /**
         * @brief Set the Strategy object
         * 
         * @param strat 
         */
        void setStrategy(Strategy* strat);

        /**
         * @brief Get the Pit Stops object
         * 
         * @return PitStop* 
         */
        PitStop* getPitStops() const;

        /**
         * @brief Set the Pit Stop object
         * 
         * @param pitstop 
         */
        void setPitStop(PitStop* pitstop);

        /**
         * @brief check if the car has pitted
         * 
         * @return true 
         * @return false 
         */
        bool carPitted();

        /**
         * @brief check if the strategy has cha
         * 
         * @return true 
         * @return false 
         */
        bool strategyChanged();

        /**
         * @brief Get the Tire Grip object
         * 
         * @return int 
         */
        virtual int getTireGrip();

        /**
         * @brief Get the Car Tire Grip object
         * 
         * @return int 
         */
        int getCarTireGrip();
        
        /**
         * @brief Get the driverName object
         * 
         * @return string 
         */
        virtual string getName();

        /**
         * @brief Set the driverName object
         * 
         * @param name 
         */
        virtual void setName(string name);

        /**
         * @brief Get the Driver Name object
         * 
         * @return string 
         */
        string getDriverName();

        /**
         * @brief Set the Driver Name object
         * 
         * @param name 
         */
        void setDriverName(string name);
        
        /**
         * @brief Get the Points object
         * 
         * @return int 
         */
        virtual int getPoints();

        /**
         * @brief Set the Points object
         * 
         * @param points 
         */
        virtual void setPoints(int points);

        /**
         * @brief Get the Car Points object
         * 
         * @return int 
         */
        int getCarPoints();

        /**
         * @brief Set the Car Points object
         * 
         * @param points 
         */
        void setCarPoints(int points);

        bool print = true; /// should it print 
    protected:
        Strategy* strategy = nullptr; /// strategy
        PitStop* pitCrew = nullptr; /// observer
        int points = 0; /// driver points
        string driverName = ""; /// driver name

        int tireGrip = 5; /// the grip of the tire
        TireCompound* compound = nullptr; /// the tire compound strategy
        bool hasPitted = false; ///  has it pitted
        bool changedStrat = false; ///  did the strategy change

        string oldStrat = "";   /// name of old strat before change
        string newStrat = "";   /// name of strat after change

        
};

#endif