#include "Team.h"

Team::Team()
{
	this->builder1 = new CarBuilder();
	this->builder2 = new CarBuilder();
	this->tireCompound = "m";
}

Team::~Team()
{
	delete this->builder1;
	delete this->builder2;
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