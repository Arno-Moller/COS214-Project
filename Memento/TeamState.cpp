#include "TeamState.h"

TeamState::TeamState(RaceCar* car1, RaceCar* car2) 
{   
    CarBuilder* builder1 = new CarBuilder();
    builder1->addChassis();
	builder1->addSuspension();
	builder1->addWing();
	builder1->addHub();
	builder1->addEngine();
	builder1->addTire("m");
	
	this->carOne = builder1->getCar();
	this->carOne->setDriverName(car1->getDriverName());

	CarBuilder* builder2 = new CarBuilder();
	builder2->addChassis();
	builder2->addSuspension();
	builder2->addWing();
	builder2->addHub();
	builder2->addEngine();
	builder2->addTire("m");
	
	this->carTwo = builder2->getCar();
	this->carTwo->setDriverName(car2->getDriverName());

	delete builder1;
	delete builder2;
}

TeamState::~TeamState() 
{	
    delete carOne;
    delete carTwo;
}

TeamState* TeamState::getTeamState() 
{
    return this;
}

RaceCar* TeamState::getCarOne() 
{
    return carOne;
}

RaceCar* TeamState::getCarTwo() 
{
    return carTwo;
}
