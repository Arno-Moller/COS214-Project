#include "Cautious.h"

Cautious::Cautious() 
{
    
}

Cautious::~Cautious() 
{
    
}

string Cautious::execute() 
{
    int tireOdds = rand()%100;

    if (tireOdds > 66)
    {
        return "hard";
    }
    else if (tireOdds > 33)
    {
        return "medium";
    }
    else
    {
        return "soft";
    }
}
