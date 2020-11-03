#include "CarBuilder.h"

CarBuilder::CarBuilder(): RaceCarBuilder()
{
	car = new CarPart();
}

CarBuilder::~CarBuilder()
{
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