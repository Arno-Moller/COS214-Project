#include "Wing.h"

Wing::Wing(): RaceCar()
{

}

Wing::~Wing()
{

}

void Wing::degrade()
{

}

RaceCar* Wing::clone() 
{
	return new Wing();
}
