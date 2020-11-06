#include "RaceConditionCommand.h"

RaceConditionCommand::RaceConditionCommand() 
{
    weather = new Race("Europe");
}

RaceConditionCommand::RaceConditionCommand(string location) 
{
    weather = new Race(location);
    this->location = location;
}

RaceConditionCommand::~RaceConditionCommand() 
{
    delete weather;
}

void RaceConditionCommand::execute() 
{
    string currentWeather = weather->getWeather();

    if (currentWeather != previousWeather)
    {
        if (previousWeather.empty())
        {
            printf("The Weather at the moment is %s!", currentWeather);
        }
        else
        {
            printf("The Weather has changed from %s to %s!", previousWeather, currentWeather);
        }
    }
    
    previousWeather = currentWeather;

    int chanceOfChanging = rand() % 100;

    if (chanceOfChanging > 0)
    {
        weather->change();
    }
}

Race* RaceConditionCommand::getRaceWeather() 
{
    return weather;
}

void RaceConditionCommand::setRaceWeather(Weather* itNeverRainOnRaceDay) 
{
    this->weather->setWeather(itNeverRainOnRaceDay);
}
