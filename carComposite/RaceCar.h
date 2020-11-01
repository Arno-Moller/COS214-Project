#ifndef RACECAR_H
#define RACECAR_H

#include <iostream>

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

        //Strategy* getStrategy() const;
        //void setStrategy(Strategy* strat);
        //PitStop* getPitStops() const;
        //void setPitStop(PitStop* pitstop);
    private:
        // Strategy* strategy;
        // PitStop* pitStops;

};

#endif