#include "Tire.h"

Tire::Tire(): RaceCar()
{
	cout << "Tire" << endl;
}

Tire::Tire(TireState *tState, TireCompound* type)
{
	this->setState(tState);
	setType(type);
}

Tire::Tire(string type)
{
	this->setState(new GoodCondition());
	setType(type);
}

Tire::~Tire()
{
    delete state;
    delete compound;
}

TireState* Tire::getState()
{
    return this->state;
}

void Tire::setState(TireState *tState)
{
	delete this->state;
	this->state = tState;
}

void Tire::setType(string type) 
{   
    delete compound;

    if (type == "soft" || type == "s")
    {
        this->compound = new SoftCompound();
    }
    else if (type == "medium" || type == "m")
    {
        this->compound = new MediumCompound();
    }
    else
    {
        this->compound = new HardCompound();
    }
    
}

void Tire::setType(TireCompound* type) 
{
    delete compound;
    this->compound = type;
}

///Function to call each lap that degrades the tires
void Tire::degrade()
{
	compound->setGrip(compound->getGrip() - compound->getRate());
	compound->setWear(compound->getWear() + compound->getRate());
	
	//~ cout << getRate()<< endl;
    notify();
}

int Tire::getGrip() 
{
    return this->compound->getGrip();
}

void Tire::setGrip(int grip) 
{
    this->compound->setGrip(grip);
}

int Tire::getWear() 
{
    return this->compound->getWear();
}

void Tire::setWear(int wear) 
{
    this->compound->setWear(wear);
}

int Tire::getRate() 
{
    return this->compound->getRate();
}

void Tire::setRate(int rate) 
{
    this->compound->setRate(rate);
}
