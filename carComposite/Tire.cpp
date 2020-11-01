#include "Tire.h"

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
}

Tire::~Tire()
{

}

void Tire::degrade()
{

}

void Tire::setState(TireState *tState)
{
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
