#include "TireState.h"

<<<<<<< HEAD
TireState::TireState()
{

}

TireState::~TireState()
{

}



=======
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
>>>>>>> theo-branch
