#include "Wing.h"

Wing::Wing(): RaceCar()
{
	// cout << "wing" << endl;
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
