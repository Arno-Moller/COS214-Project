#include "Chassie.h"

Chassie::Chassie(): RaceCar()
{

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
