#include "LapCommand.h"


LapCommand::LapCommand() 
{   
    drivers = new RaceCar*[20];

    for (int i = 0; i < 20; i++)
    {
        drivers[i] = nullptr;
    }
}

LapCommand::LapCommand(RaceCar** cars) 
{
    this->drivers = cars;
}

LapCommand::~LapCommand() 
{
    for (int i = 0; i < 20; i++)
    {
        delete drivers[i];
    }

    delete drivers;
}

void LapCommand::execute() 
{
    for (int i = 0; i < 20; i++)
    {
        drivers[i]->lap();
    }
}

RaceCar** LapCommand::getCars() 
{
    return drivers;
}

void LapCommand::setCars(RaceCar** cars) 
{
    this->drivers = cars;
}
