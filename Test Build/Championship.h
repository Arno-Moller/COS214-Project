#ifndef CHAMPIONSHIP_H
#define CHAMPIONSHIP_H

#include "Team.h"
#include "RacingTeam.h"

#include <iostream>
using namespace std;

struct TeamResults///the results of the teams 
{
    int driver1Points; /// the points driver one recieved
    int driver2Points;/// the points driver two recieved 
    int TeamPoints; /// the points of both drivers summed together
    string teamName; /// the teams name 
    Team* teamObject; /// the object of the team 
};

struct Results /// The results Structure 
{
    string driverName; /// driver name 
    int team ; /// number of team 
    int driver; /// number of driver
    double time; /// time 
    double TeamTime; /// team time
    string teamName; /// team name 
    int points; /// amount of points recieved
    Team* teamObject; /// The team it belongs to
};

class Championship
{
    protected:
        double** arr; /**< the double array of the times made by each driver for each lap   */ 
        int numDrivers; /**< the number of drivers driving the race */ 
        int numLaps; /**< the number of laps that the race consists of   */ 
        Team** teams; /**< List of participating teams   */ 
        Results* driversResults; /**< the drivers results for the race */ 
        TeamResults* teamResults; /**< the team results of the race */ 
        int* pointList; /**< the points list */ 
        int pointAmount [20] = {25,18,15,12,10,8,6,4,2,1,0,0,0,0,0,0,0,0,0,0}; /**< array of points for each place  */ 
        
        
    public:

         /**
         * Constructor 
         * @param Team 
         * @param array of the times for each lap 
         * @param drivers amount
         * @param laps amount
         */
        Championship(Team** , double** array , int drivers , int laps); 
        
        virtual ~Championship();///destructor

       /**
       *Prints out the results of the race for each driver
       */
        void calculate();

       /**
       *Prints out the results of the race for each driver
       */
        void logResults();

       /**
       *Prints out the results of the race for each driver
       */
        int* getTeamPoints();

       /**
       *Prints out the results of the race for each driver
       */
        virtual void print() = 0;
    
    
};
#endif // CHAMPIONSHIP_H