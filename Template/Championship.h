#ifndef CHAMPIONSHIP_H
#define CHAMPIONSHIP_H

#include "../Prototype/Team.h"
#include "../Prototype/RacingTeam.h"

#include <iostream>
using namespace std;

struct TeamResults
{
    int driver1Points;
    int driver2Points;
    int TeamPoints;
    string teamName;
    Team* teamObject;
};

struct Results
{
    int team ; 
    int driver;
    double time;
    double TeamTime;
    string teamName;
    int points;
    Team* teamObject;
};

class Championship
{
    protected:
        double** arr;
        int numDrivers;
        int numLaps;
        Team** teams;
        Results* driversResults;
        TeamResults* teamResults;
        int* pointList;
        int pointAmount [20] = {25,18,15,12,10,8,6,4,2,1,0,0,0,0,0,0,0,0,0,0};
        
        
    public:
        Championship(Team** , double** array , int drivers , int laps);///constructor 
        virtual ~Championship();///destructor

        void calculate();
        void logResults();
        int* getTeamPoints();
        virtual void print() = 0;
    
    
};
#endif // CHAMPIONSHIP_H