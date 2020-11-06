#include "Team.h"

Team::Team()
{
	this->builder = new CarBuilder();
	this->tireCompound = "m";
}

Team::Team(string tireCompound)
{
	this->builder = new CarBuilder();
	this->tireCompound = tireCompound;
}

Team::~Team()
{
	delete this->builder;
	delete this->car1;
	delete this->car2;
}

void Team::buildCar()
{
	builder->addChassis();
	builder->addSuspension();
	builder->addWing();
	builder->addHub();
	builder->addEngine();
	builder->addTire(tireCompound);
	
	car1 = builder->getCar();
	car2 = builder->getCar();
}

void Team::lap()
{
	car1->lap();
	car2->lap();
}

void Team::setTireCompound(string tireCompound)
{
	this->tireCompound = tireCompound;
}
/*
RaceCar* Team::getCarOne() 
{
	return this->car1;
}

RaceCar* Team::getCarTwo() 
{
	return this->car2;
}

void Team::setCarOne(RaceCar* car1) 
{
	this->car1 = car1;
}

void Team::setCarTwo(RaceCar* car2) 
{
	this->car2 = car2;
}
*/