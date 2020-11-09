#include "RaceConditionCommand.h"

RaceConditionCommand::RaceConditionCommand() 
{
    weather = new Race("Europe");
}

RaceConditionCommand::RaceConditionCommand(string location) 
{
    weather = new Race(location);
    this->location = location;

    cout << "Current weather forcast is: "
            << weather->getWeather() << endl;
}

RaceConditionCommand::~RaceConditionCommand() 
{
    delete weather;
}

void RaceConditionCommand::execute() 
{
    string currentWeather = weather->getWeather();

    weather->change();

    if (currentWeather != weather->getWeather())
    {
        if (previousWeather.empty())
        {
            cout << "The Weather changed from forcast: " << weather->getWeather() << endl << endl;
        }
    }
    else
    {
        cout << "Weather went according to forcast: " << weather->getWeather() << endl << endl;
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
