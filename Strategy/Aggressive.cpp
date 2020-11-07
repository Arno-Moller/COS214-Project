#include "Aggressive.h"

Aggressive::Aggressive() 
{
    
}

Aggressive::~Aggressive() 
{
    
}

string Aggressive::execute() 
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

string Aggressive::type() 
{
    return "Aggressive";
}
