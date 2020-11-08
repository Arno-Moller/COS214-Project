#include "Championship.h"




Championship::Championship(Team** t, double** array , int drivers , int laps) 
{
    this->arr=array;
    this->numDrivers=drivers;
    this->numLaps=laps;
    this->teams=t;
}

Championship::~Championship() 
{
    
}

