#include "Team.h"

Team::Team() 
{
    this->carOne = nullptr;
    this->carTwo = nullptr;
}

Team::~Team() 
{
    delete carOne;
    delete carTwo;
}

void Team::construct() 
{
    
}

Memento* Team::createMemento() 
{
    Memento* teamSave = new Memento(carOne, carTwo);
    return teamSave;
}

void Team::setMemento(Memento* mem) 
{
    this->carOne = mem->getState()->getCarOne();
    this->carTwo = mem->getState()->getCarTwo();
}

RaceCar* Team::getCarOne() 
{
    return this->carOne;
}

void Team::setCarOne(RaceCar* one) 
{
    this->carOne = one;
}

RaceCar* Team::getCarTwo() 
{
    return this->carTwo;
}

void Team::setCarTwo(RaceCar* two) 
{
    this->carTwo = two;
}
