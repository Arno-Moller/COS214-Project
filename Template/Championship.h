#ifndef CHAMPIONSHIP_H
#define CHAMPIONSHIP_H

#include "../Prototype/Team.h"
#include "../Prototype/RacingTeam.h"

#include <iostream>
using namespace std;

struct Results
{
    int team ; 
    int driver;
    double time;
    double TeamTime;
    string teamName;
};

class Championship
{
    protected:
        double** arr;
        int numDrivers;
        int numLaps;
        Team** teams;
        
        
    public:
        Championship(Team** , double** array , int drivers , int laps);///constructor 
        virtual ~Championship();///destructor

        virtual void calculate() = 0;
        virtual void swap(double **xp, double **yp) = 0;
    
    
};
#endif // CHAMPIONSHIP_H