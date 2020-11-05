#include "CarBuilder.h"

<<<<<<< HEAD
CarBuilder::CarBuilder()
{

=======
CarBuilder::CarBuilder(): RaceCarBuilder()
{
	car = new CarPart();
>>>>>>> theo-branch
}

CarBuilder::~CarBuilder()
{
<<<<<<< HEAD

}

RaceCar *CarBuilder::buildCar()
{
    return nullptr;
}

RaceCar *CarBuilder::getResult()
{
    return nullptr;
}
=======
	//cars get deleted in team
}


void CarBuilder::addChassis()
{
	car->addPart(new Chassie);
}

void CarBuilder::addSuspension()
{
	car->addPart(new Suspension);
}

void CarBuilder::addWing()
{
	car->addPart(new Wing);
}

void CarBuilder::addHub()
{
	car->addPart(new Hub);
}

void CarBuilder::addEngine()
{
	car->addPart(new Engine);
}

void CarBuilder::addTire(string compound)
{
	car->addPart(new Tire(compound));
}
    
RaceCar* CarBuilder::getCar()
{
	return this->car;
}
>>>>>>> theo-branch
