#include "Suspension.h"

Suspension::Suspension(): RaceCar()
{
	// cout << "Suspension" << endl;
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
