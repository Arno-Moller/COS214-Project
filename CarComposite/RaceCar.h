#ifndef RACECAR_H
#define RACECAR_H

#include <iostream>
#include "../Observer/PitStop.h"
#include "../Strategy/Strategy.h"
#include "../Strategy/Sensible.h"
#include "../Strategy/Cautious.h"
#include "../Strategy/Aggressive.h"
#include "../TireCompoundStrategy/SoftCompound.h"
#include "../TireCompoundStrategy/MediumCompound.h"
#include "../TireCompoundStrategy/HardCompound.h"

using namespace std;
//This class is the product participant of the Builder Design pattern 
class RaceCar
{
    public:
        RaceCar();//constructor
        ~RaceCar();//destructor
    
        void request();
        virtual void lap();//the method to do a lapd 
        RaceCar* getChild(); // returns the child of the race car
        virtual void degrade();//the degrade method 
        virtual void addPart(RaceCar* car);// method to add parts to the race car 

        void addPitcrew(PitStop* pitcrew);// attach Observer
        void removePitCrew();// dettach observer
        void notify();// notify observer

	    //~ virtual void addPart(RaceCar* part) = 0;

        int getPoints();
        void setPoints(int points);

        Strategy* getStrategy() const;
        void setStrategy(Strategy* strat);
        PitStop* getPitStops() const;
        void setPitStop(PitStop* pitstop);

        string getDriverName();
        void setDriverName(string name);

        virtual int getTireGrip();
        int getCarTireGrip();

        bool carPitted();

    protected:
        Strategy* strategy = nullptr;
        PitStop* pitCrew = nullptr;
        int points = 0;
        string driverName = "";

        int tireGrip = 5;
        TireCompound* compound; 
        bool hasPitted = false;

};

#endif