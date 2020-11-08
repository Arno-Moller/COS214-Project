#include "RacingTeam.h"

RacingTeam::RacingTeam() 
{

}

RacingTeam::RacingTeam(RacingTeam& racingTeam) 
{	
	// this->tireCompound = racingTeam.tireCompound;
	// this->builder1 = new CarBuilder();
	// this->builder2 = new CarBuilder();
    // buildCar();

	car1Part = new CarPart(*racingTeam.getCarOnePart());
	// car1Part->setName(racingTeam.getCarOne()->getName());

    car2Part = new CarPart(*racingTeam.getCarTwoPart());
	// car2Part->setName(racingTeam.getCarTwo()->getName());

	setCarOne(racingTeam.getCarOne()->clone());
	// car1->setName(racingTeam.getCarOne()->getName());

	setCarTwo(racingTeam.getCarTwo()->clone());
	// car2->setName(racingTeam.getCarTwo()->getName());
}

RacingTeam::RacingTeam(string tireCompound)
{
    this->builder1 = new CarBuilder();
	this->builder2 = new CarBuilder();
	this->tireCompound = tireCompound;
}

RacingTeam::~RacingTeam() 
{
	if(car1 != nullptr)
	{
   		delete this->car1;
		car1 = nullptr;
	}

	if(car2 != nullptr)
	{
    	delete this->car2;
    	car2 = nullptr;
	}
}

RaceCar* RacingTeam::getCarOne() 
{
	return this->car1;
}

CarPart* RacingTeam::getCarOnePart() 
{
	return this->car1Part;
}

RaceCar* RacingTeam::getCarTwo() 
{
	return this->car2;
}

CarPart* RacingTeam::getCarTwoPart() 
{
	return this->car2Part;
}

void RacingTeam::setCarOne(RaceCar* car1) 
{
	this->car1 = car1;
}

void RacingTeam::setCarTwo(RaceCar* car2) 
{
	this->car2 = car2;
}

Team* RacingTeam::clone() 
{
    return new RacingTeam(*this);
}

int RacingTeam::getTeamPoints() 
{
    return teamPoints;
}

void RacingTeam::setTeamPoints() 
{
    teamPoints = getCarOne()->getPoints() + getCarTwo()->getPoints();

}

string RacingTeam::getTeamName() 
{
    return teamName;
}

void RacingTeam::setTeamName(string name) 
{
    teamName = name;
}

Memento* RacingTeam::createMemento() 
{
	return new Memento(this);
}

void RacingTeam::loadMemento(Memento* m) 
{
	delete car1;
	delete car2;

	this->car1 = m->getState()->getCarOne();
	this->car2 = m->getState()->getCarTwo();
}



void RacingTeam::buildCar()
{
	builder1->addChassis();
	builder1->addSuspension();
	builder1->addWing();
	builder1->addHub();
	builder1->addEngine();
	builder1->addTire(tireCompound);
	
	car1 = builder1->getCar();
	car1Part = builder1->getCarPart();
	
	builder2->addChassis();
	builder2->addSuspension();
	builder2->addWing();
	builder2->addHub();
	builder2->addEngine();
	builder2->addTire(tireCompound);
	
	car2 = builder2->getCar();
	car2Part = builder2->getCarPart();

}

void RacingTeam::lap()
{
	car1->lap();
	car2->lap();
}

void RacingTeam::setTireCompound(string tireCompound)
{
	this->tireCompound = tireCompound;
}
