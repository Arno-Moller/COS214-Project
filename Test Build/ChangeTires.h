#ifndef CHANGETIRES_H
#define CHANGETIRES_H

#include "PitStop.h"
#include "Tire.h"
#include "TireState.h"

///concrete observer participant of the Observer design pattern. 
class ChangeTires: public PitStop
{
private:
    Tire* carTire; /**< the tires of the car  */ 
    TireState* state; /**< the state of the tires  */ 
public:
    /**
    * Constructor
    * @param carTire 
    */
    ChangeTires(Tire* carTire);
    
    ~ChangeTires();///destructor

    void update(); /// observes the tires and changes them when neccesary 
};

#endif // CHANGETIRES_H