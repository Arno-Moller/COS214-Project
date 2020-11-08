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
               
        virtual ~TireState(); /// destructor 
        
        /**
        * Checks if the race car should pit 
        * @return true if the race car should pit and false otherwise 
        */
        virtual bool handle(Tire* tire) = 0;/// abstract interface to check the state of the tires
   
        virtual void changeTireState(Tire* tire) = 0; /// abstrackt interface to change the tire state

        virtual TireState* clone() = 0;
};

#include "../CarComposite/Tire.h"


#endif