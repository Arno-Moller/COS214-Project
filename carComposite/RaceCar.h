#ifndef RACECAR_H
#define RACECAR_H

#include <iostream>

using namespace std;

class RaceCar
{
    public:
        RaceCar();
        ~RaceCar();
    
        void notify();
        void attach();
        void detach();
	void request();
	virtual void lap();
	RaceCar* getChild();
	virtual void degrade();
	virtual void addPart(RaceCar* car);
    
	//~ virtual void addPart(RaceCar* part) = 0;

        //Strategy* getStrategy() const;
        //void setStrategy(Strategy* strat);
        //PitStop* getPitStops() const;
        //void setPitStop(PitStop* pitstop);
    private:
        // Strategy* strategy;
        // PitStop* pitStops;

};

#endif