#include "Aggresive.h"

Aggresive::Aggresive() 
{
    
}

Aggresive::~Aggresive() 
{
    
}

string Aggresive::execute() 
{
    int tireOdds = rand()%100;

    if (tireOdds > 50)
    {
        return "soft";
    }
    else if (tireOdds > 25)
    {
        return "medium";
    }
    else
    {
        return "hard";
    }
}
