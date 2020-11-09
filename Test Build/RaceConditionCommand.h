#ifndef RACECONDITIONCOMMAND_H
#define RACECONDITIONCOMMAND_H

#include <iostream>
#include <cstdio>
#include "Command.h"
#include "Weather.h"
#include "Race.h"

using namespace std;

class RaceConditionCommand: public Command
{
private:
    Race* weather; /**< The weather of the race  */
    string location; /**< The location of the race   */
    string previousWeather = ""; /**< The previous weather   */
public:
    RaceConditionCommand();///constructor

     /**
     * Constructor
     * @param location
     */
    RaceConditionCommand(string location);

    ~RaceConditionCommand();///destructor

    /**
    *  Function that executes all the commands 
    */
    void execute();
    
    /**
    *  get the race weather 
    * @return the race weather 
    */
    Race* getRaceWeather();

    /**
    *  Set the weather of the race
    * @param itNeverRainOnRaceDay
    */
    void setRaceWeather(Weather* itNeverRainOnRaceDay); 

};


#endif // RACECONDITIONCOMMAND_H