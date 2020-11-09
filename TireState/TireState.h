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
        * @param Tire this checks the state of the tire and if it is nedded to be changed . 
        * @return true if the race car should pit and false otherwise 
        */
        virtual bool handle(Tire* tire) = 0;/// abstract interface to check the state of the tires
    

        /**
        * abstract interface to change the tire state  
        * @return true if the race car should pit and false otherwise 
        */
        virtual void changeTireState(Tire* tire) = 0; /// abstract interface to change the tire state
        

        /**
        * abstract interface to clone the TireState.   
        * @return a clone of the the tireState
        */
        virtual TireState* clone() = 0;
};

#include "../CarComposite/Tire.h"


#endif