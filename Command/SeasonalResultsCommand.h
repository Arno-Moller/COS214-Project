#ifndef SeasonalResultsCommand_H
#define SeasonalResultsCommand_H

#include <iostream>
#include <cstdio>
#include "Command.h"

#include "../Prototype/Team.h"

using namespace std;

struct TeamResult
{   
    Team* team;
    string teamName;
    int teamPoints;
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