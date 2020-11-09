#ifndef RACECAR_H
#define RACECAR_H

#include <list>
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
        virtual RaceCar* clone() = 0;

        virtual list<RaceCar*> getCarParts();

        void addPitcrew(PitStop* pitcrew);// attach Observer
        void removePitCrew();// detach observer
        void notify();// notify observer


        Strategy* getStrategy() const;
        void setStrategy(Strategy* strat);
        PitStop* getPitStops() const;
        void setPitStop(PitStop* pitstop);

        bool carPitted();
        bool strategyChanged();

        virtual int getTireGrip();
        int getCarTireGrip();

        virtual string getName();
        virtual void setName(string name);
        string getDriverName();
        void setDriverName(string name);

        virtual int getPoints();
        virtual void setPoints(int points);
        int getCarPoints();
        void setCarPoints(int points);

        bool print = true;
    protected:
        Strategy* strategy = nullptr;
        PitStop* pitCrew = nullptr;
        int points = 0;
        string driverName = "";

        int tireGrip = 5;
        TireCompound* compound = nullptr; 
        bool hasPitted = false;
        bool changedStrat = false;

        string oldStrat = "";
        string newStrat = "";

        
};

#endif