#include "TeamState.h"

TeamState::TeamState(RaceCar* carOne, RaceCar* carTwo) 
{   
    CarBuilder* builder1 = new CarBuilder();
    builder1->addChassis();
	builder1->addSuspension();
	builder1->addWing();
	builder1->addHub();
	builder1->addEngine();
	builder1->addTire("m");
	
	this->carOne = builder1->getCar();
	this->carOne->setDriverName(carOne->getDriverName());

	CarBuilder* builder2 = new CarBuilder();
	builder2->addChassis();
	builder2->addSuspension();
	builder2->addWing();
	builder2->addHub();
	builder2->addEngine();
	builder2->addTire("m");
	
	this->carTwo = builder2->getCar();
	this->carTwo->setDriverName(carTwo->getDriverName());
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
