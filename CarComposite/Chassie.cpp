#include "Chassie.h"

Chassie::Chassie(): RaceCar()
{
	// cout << "Chassis" << endl;
}

Chassie::~Chassie()
{

}

RaceCar* Chassie::clone() 
{
	return new Chassie();
}

void Chassie::degrade()
{
	
}
