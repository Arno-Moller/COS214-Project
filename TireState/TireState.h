#ifndef TIRESTATE_H
#define TIRESTATE_H

#include <iostream>
#include <string>

class Tire;

using namespace std;

///The state participant of the State design pattern 
class TireState
{   
    public:
        TireState();///constructor
        TireState(Tire* tires);///constructor 
        virtual ~TireState(); /// destructor 
     /**
     * .
     * Checks if the race car should pit 
     * 
     * @return true if the race car should pit and false otherwise 
     */
        virtual bool handle() = 0;/// abstract interface to check the state of the tires
   
        virtual void changeTireState() = 0; /// abstrackt interface to change the tire state

    protected:
        Tire* tires; /**< a tire object of  */ 
};

#include "../CarComposite/Tire.h"


#endif