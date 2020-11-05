#ifndef RACECAR_H
#define RACECAR_H

#include <iostream>
<<<<<<< HEAD

using namespace std;

class RaceCar
{
    public:
        RaceCar();
        ~RaceCar();
        void request();
        void addChild(RaceCar* car);
        RaceCar* getChild();
        void opertation();
        void notify();
        void attach();
        void detach();
        void opertation2();
=======
#include "PitStop.h"

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
>>>>>>> theo-branch

        //Strategy* getStrategy() const;
        //void setStrategy(Strategy* strat);
        //PitStop* getPitStops() const;
        //void setPitStop(PitStop* pitstop);
    private:
        // Strategy* strategy;
<<<<<<< HEAD
        // PitStop* pitStops;
=======
        PitStop* pitCrew;
>>>>>>> theo-branch

};

#endif