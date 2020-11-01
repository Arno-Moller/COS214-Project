#include "CarState.h"

CarState::CarState(RaceCar* car) 
{
    this->car = new RaceCar(car); // gebruik raceCar copy constructor
}

CarState::~CarState() 
{
    delete car;
}

RaceCar* CarState::getCarState() 
{
    return this->car;
}
