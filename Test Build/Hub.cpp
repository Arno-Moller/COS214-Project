#include "Hub.h"

Hub::Hub(): RaceCar()
{

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
