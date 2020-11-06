#ifndef RACECONDITIONCOMMAND_H
#define RACECONDITIONCOMMAND_H

#include <iostream>
#include <cstdio>
#include "Command.h"
#include "../StateWeather/Weather.h"
#include "../StateWeather/Race.h"

using namespace std;

class RaceConditionCommand: public Command
{
private:
    Race* weather;
    string location;
    string previousWeather = "";
public:
    RaceConditionCommand();
    RaceConditionCommand(string location);
    ~RaceConditionCommand();

    void execute();

    Race* getRaceWeather();
    void setRaceWeather(Weather* itNeverRainOnRaceDay); 

};


#endif // RACECONDITIONCOMMAND_H