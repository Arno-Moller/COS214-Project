#ifndef RACECAR_H
#define RACECAR_H

#include <iostream>
#include "../Observer/PitStop.h"

using namespace std;
//This class is the product participant of the Builder Design pattern 
class RaceCar
{
    public:
        RaceCar();//constructor
        ~RaceCar();//destructor
    
        void request();
        virtual void lap();//the method to do a lap 
        RaceCar* getChild(); // returns the child of the race car
        virtual void degrade();//the degrade method 
        virtual void addPart(RaceCar* car);// method to add parts to the race car 

        void addPitcrew(PitStop* pitcrew);// attach Observer
        void removePitCrew();// dettach observer
        void notify();// notify observer

	    //~ virtual void addPart(RaceCar* part) = 0;

        //Strategy* getStrategy() const;
        //void setStrategy(Strategy* strat);
        //PitStop* getPitStops() const;
        //void setPitStop(PitStop* pitstop);
    private:
        // Strategy* strategy;
        PitStop* pitCrew;

};

#endif