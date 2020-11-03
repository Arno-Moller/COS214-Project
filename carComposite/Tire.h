#ifndef TIRE_H
#define TIRE_H

#include <iostream>

#include "RaceCar.h"
#include "GoodCondition.h"

//~ class TireState;

using namespace std;

//Context
class Tire: public RaceCar
{
    public:
        Tire();
        Tire(string type);
        ~Tire();
        void degrade();
        void setState(TireState* tState);

        void setType(string type);
        string getType()const;
        void setGrip(int grip);
        int getGrip()const;
        void setWear(float wear);
        float getWear()const;
	void setRate(float grip);
        float getRate()const;

    protected:
        Tire(TireState* tState, string type);
        TireState*  getState();
    
    private:
        TireState* state;
        string type;
        int grip;
        float wear; 		//100%
	float degradeRate;	//rate at which the tires degrade
};

//~ #include "TireState.h"
//~ #include "GoodCondition.h"

#endif