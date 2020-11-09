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

	builder1 = nullptr;
	builder2 = nullptr;
	car1 = nullptr;
	car2 = nullptr;
}