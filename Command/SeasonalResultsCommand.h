#ifndef SeasonalResultsCommand_H
#define SeasonalResultsCommand_H

#include <iostream>
#include <cstdio>
#include "Command.h"

#include "../Prototype/Team.h"

using namespace std;

struct TeamResult
{   
    Team* team;  /**< The teams taking part in the race   */
    string teamName;  /**< The teams taking part in the race   */
    int teamPoints;  /**< The teams taking part in the race   */
};

class SeasonalResultsCommand: public Command
{
private:
    Team** teams;
    TeamResult* results;
public:
    SeasonalResultsCommand(Team**);
    ~SeasonalResultsCommand();

    void execute();
};


#endif // SeasonalResultsCommand_H