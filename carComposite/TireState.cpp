#include "TireState.h"

TireState::TireState() 
{
    
}

TireState::TireState(Tire* tires) 
{
    this->tires = tires;
}

TireState::~TireState() 
{
    delete tires;
}