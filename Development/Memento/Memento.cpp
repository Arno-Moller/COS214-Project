#include "Memento.h"

Memento::Memento(Team* team) 
{
    state = new TeamState(team);
}

Memento::Memento(RaceCar* carOne, RaceCar* carTwo) 
{
    state = new TeamState(carOne, carTwo);
}

Memento::~Memento() 
{
    delete state;
    state = nullptr;
}

TeamState* Memento::getState() 
{
    return state;
}

void Memento::setState(Team* team) 
{
    state = new TeamState(team->getCarOne(), team->getCarTwo());
}

void Memento::setState(RaceCar* carOne, RaceCar* carTwo) 
{
    state = new TeamState(carOne, carTwo);
}