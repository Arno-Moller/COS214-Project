#include "Memento.h"

Memento::Memento(RaceCar* car) 
{
    this->state = new CarState(car);
}

Memento::~Memento() 
{
    delete this->state;
}

RaceCar* Memento::getState() 
{
    return this->state->getCarState();
}

void Memento::setState(RaceCar* car) 
{
    this->state = new CarState(car);
}
