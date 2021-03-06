#include "ChangeTires.h"

ChangeTires::ChangeTires(Tire* carTire) 
{      
    this->carTire = carTire;
    this->state = carTire->getState();
}

ChangeTires::~ChangeTires() 
{
    delete carTire;
    carTire = nullptr;

    delete state;
    state = nullptr;
}

void ChangeTires::update() 
{   
    this->state = carTire->getState();
    
    if (state->handle(carTire) == true) 
    {   
        carTire->setType(carTire->getNextTireCompound()); 
    }
}
 