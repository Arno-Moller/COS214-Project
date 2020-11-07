#include "ChangeTires.h"

ChangeTires::ChangeTires(Tire* carTire) 
{      
    this->carTire = carTire;
    this->state = carTire->getState();
}

ChangeTires::~ChangeTires() 
{
    delete carTire;
    delete state;
}

void ChangeTires::update() 
{   
    this->state = carTire->getState();
    
    if (state->handle(carTire) == true || (rand()%100) > 75) 
    {   
        carTire->setType(carTire->getNextTireCompound()); 
        
    }
    
}
 