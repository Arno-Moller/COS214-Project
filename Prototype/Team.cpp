#include "Team.h"

Team::Team()
{
	this->builder = new CarBuilder();
	this->tireCompound = "m";
}

Team::~Team()
{
	delete this->builder;
	delete this->car1;
	delete this->car2;
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