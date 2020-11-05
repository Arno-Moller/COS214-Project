#include "Sensible.h"

Sensible::Sensible() 
{
    
}

Sensible::~Sensible() 
{
    
}

string Sensible::execute() 
{
    int tireOdds = rand()%100;

    if (tireOdds > 50)
    {
        return "hard";
    }
    else if (tireOdds > 20)
    {
        return "medium";
    }
    else
    {
        return "soft";
    }
}

