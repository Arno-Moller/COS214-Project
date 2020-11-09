#include "Suspension.h"

Suspension::Suspension(): RaceCar()
{

}

Suspension::~Suspension()
{

}

void Suspension::degrade()
{

}

RaceCar* Suspension::clone() 
{
	return new Suspension();
}
