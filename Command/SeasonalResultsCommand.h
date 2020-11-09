#ifndef SeasonalResultsCommand_H
#define SeasonalResultsCommand_H

#include <iostream>
#include <cstdio>
#include "Command.h"

#include "../Prototype/Team.h"

using namespace std;

struct TeamResult /// the team results
{   
    Team* team; ///the team 
    string teamName;  /// team name
    int teamPoints;  /// team points 
};
/// concrete Command participant of the Command Design Pattern 
class SeasonalResultsCommand: public Command
{
private:
    Team** teams; /**< The teams taking part in the race   */
    TeamResult* results;  /**< The results of the teams    */
public:
     /**
     *  Constructor
     * @param teams
     *
    */
    SeasonalResultsCommand(Team**);

    ~SeasonalResultsCommand();///default constructor

    /**
    *  Function that executes all the commands 
    */
    void execute();
};


#endif // SeasonalResultsCommand_H