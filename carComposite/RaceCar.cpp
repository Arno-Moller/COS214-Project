#include "RaceCar.h"

RaceCar::RaceCar()
{

}

RaceCar::~RaceCar()
{

}

void RaceCar::request()
{

}

<<<<<<< HEAD
void RaceCar::addChild(RaceCar *car)
=======
void RaceCar::addPart(RaceCar *car)
>>>>>>> theo-branch
{

}

RaceCar *RaceCar::getChild()
{
    return nullptr;
}

<<<<<<< HEAD
void RaceCar::opertation()
{

}

void RaceCar::notify()
=======
void RaceCar::lap()
{
	cout << "lapping" << endl;
}

void RaceCar::degrade()
>>>>>>> theo-branch
{

}

<<<<<<< HEAD
void RaceCar::attach()
{

}

void RaceCar::detach()
{

}

void RaceCar::opertation2()
{

=======
void RaceCar::addPitcrew(PitStop* pitcrew) 
{
    this->pitCrew = pitCrew;
}

void RaceCar::removePitCrew() 
{   
    delete pitCrew;
}

void RaceCar::notify() 
{
    this->pitCrew->update();
>>>>>>> theo-branch
}
