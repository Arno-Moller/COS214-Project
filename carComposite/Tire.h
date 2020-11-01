#ifndef TIRE_H
#define TIRE_H

#include <iostream>

using namespace std;
#include "TireState.h"

class TireState;

//Context
class Tire
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

    protected:
        Tire(TireState* tState, string type);
        TireState*  getState();
    private:
        TireState* state;
        string type;
        int grip;
        float wear; //100%
};

#endif