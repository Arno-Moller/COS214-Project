#include "Tire.h"

<<<<<<< HEAD
Tire::Tire()
{

}

Tire::Tire(string type)
{
    setType(type);
}

Tire::Tire(TireState *tState, string type)
{
    this->setState(tState);
    setType(type);
=======
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
>>>>>>> theo-branch
}

Tire::~Tire()
{
<<<<<<< HEAD

}

void Tire::degrade()
{

=======
    delete state;
    delete compound;
}

TireState* Tire::getState()
{
    return this->state;
>>>>>>> theo-branch
}

void Tire::setState(TireState *tState)
{
<<<<<<< HEAD
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
    }
    else if (type == "s")
    {
        setGrip(80);
        setWear(0.0);
    }
    else if (type == "m")
    {
        setGrip(70);
        setWear(0.0);
    }
    else if (type == "h")
    {
        setGrip(60);
        setWear(0.0);
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
=======
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
>>>>>>> theo-branch
