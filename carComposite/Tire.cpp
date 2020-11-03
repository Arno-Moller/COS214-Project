#include "Tire.h"

Tire::Tire(): RaceCar()
{
	cout << "Tire" << endl;
}

Tire::Tire(string type)
{
	this->setState(new GoodCondition());
	setType(type);
}

Tire::Tire(TireState *tState, string type)
{
	this->setState(tState);
	setType(type);
}

Tire::~Tire()
{

}

///Function to call each lap that degrades the tires
void Tire::degrade()
{
	setGrip(getGrip() - getRate());
	setWear(getWear() + getRate());
	
	//~ cout << getRate()<< endl;
	
	state->handle(this);
}

void Tire::setState(TireState *tState)
{
	delete this->state;
	this->state = tState;
}

TireState *Tire::getState()
{
    return nullptr;
}

void Tire::setType(string type)
{
    this->type = type;
    if(type == "w")
    {
	setGrip(100);
	setWear(0.0);
	setRate(1.4);
    }
    else if (type == "s")
    {
        setGrip(80);
        setWear(0.0);
	setRate(2.1);
    }
    else if (type == "m")
    {
        setGrip(70);
        setWear(0.0);
	setRate(1.6);
    }
    else if (type == "h")
    {
        setGrip(60);
        setWear(0.0);
	setRate(1.2);
    }

}

string Tire::getType() const
{
    return this->type;
}

void Tire::setGrip(int grip)
{
    this->grip = grip;
}

int Tire::getGrip() const
{
    return this->grip;
}

void Tire::setWear(float wear)
{
    this->wear = wear;
}

float Tire::getWear() const
{
    return this->wear;
}

void Tire::setRate(float rate)
{
    this->degradeRate = rate;
}

float Tire::getRate() const
{
    return this->degradeRate;
}
