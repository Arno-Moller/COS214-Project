#include "Memento.h"

Memento::Memento(Team* team) 
{
    this->state = new TeamState(team->getCarOne(), team->getCarTwo());
}

Memento::Memento(RaceCar* carOne, RaceCar* carTwo) 
{
    this->state = new TeamState(carOne, carTwo);
}

Memento::~Memento() 
{
    delete this->state;
}

TeamState* Memento::getState() 
{
    return this->state;
}

void Memento::setState(Team* team) 
{
    this->state = new TeamState(team->getCarOne(), team->getCarTwo());
}

void Memento::setState(RaceCar* carOne, RaceCar* carTwo) 
{
    this->state = new TeamState(carOne, carTwo);
}