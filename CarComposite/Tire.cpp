#include "Tire.h"

Tire::Tire(): RaceCar()
{
	cout << "Tire" << endl;
}

Tire::Tire(TireState *tState, TireCompound* type)
{
	this->setState(tState);
	setType(type);
    tireGrip = getGrip();
}

Tire::Tire(string type)
{
	this->setState(new GoodCondition());
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

    tireGrip = getGrip();
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
	if (state != nullptr)
    {
        delete this->state;
        this->state = nullptr;
    }
    
	this->state = tState;
}

void Tire::setType(string type) 
{   
    delete compound;

    string newCompound = "";

    if (type == "soft" || type == "s")
    {
        this->compound = new SoftCompound();
        newCompound = "Soft Compound";
    }
    else if (type == "medium" || type == "m")
    {
        this->compound = new MediumCompound();
        newCompound = "Medium Compound";
    }
    else
    {
        this->compound = new HardCompound();
        newCompound = "Hard Compound";
    }

    if (currentCompound != "")
    {
        printf("The tyres have been changed from %s to %s on car %s", currentCompound, newCompound, getDriverName());
    }
    
    currentCompound = newCompound;
}

void Tire::setType(TireCompound* type) 
{
    delete compound;
    this->compound = type;
}

void Tire::lap() 
{
    degrade();
}

///Function to call each lap that degrades the tires
void Tire::degrade()
{   
	compound->setWear(compound->getWear() + compound->getRate());
    compound->setGrip(compound->getGrip() - compound->getRate());
	
	//~ cout << getRate()<< endl;
    notify();
    
    tireGrip = getGrip();
}

int Tire::getGrip() 
{
    return this->compound->getGrip();
}

void Tire::setGrip(int grip) 
{
    this->compound->setGrip(grip);
    tireGrip = grip;
}

int Tire::getWear() 
{
    return this->compound->getWear();
}

void Tire::setWear(int wear) 
{
    this->compound->setWear(wear);
}

double Tire::getRate() 
{
    return this->compound->getRate();
}

string Tire::getNextTireCompound() 
{
    return getStrategy()->execute();
}
