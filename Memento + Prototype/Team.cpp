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
    
}

void Team::setMemento(Memento* mem) 
{
    
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
