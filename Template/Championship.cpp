#include "Championship.h"

struct Results
{
    int team ; 
    int driver;
    double time;
    double TeamTime;
};


Championship::Championship(double** array , int drivers , int laps) 
{
    this->arr=array;
    this->numDrivers=drivers;
    this->numLaps=laps;
    
}

Championship::~Championship() 
{
    
}

