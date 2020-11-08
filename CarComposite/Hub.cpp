#include "Hub.h"

Hub::Hub(): RaceCar()
{
	// cout << "Hub" << endl;
}

Hub::~Hub()
{

}

void Hub::degrade()
{

}

RaceCar* Hub::clone() 
{
	return new Hub();
}
