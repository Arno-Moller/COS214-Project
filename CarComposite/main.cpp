#include "CarBuilder.h"
#include "RaceCar.h"
#include "CarPart.h"
#include "Chassie.h"
#include "Engine.h"
#include "Hub.h"
#include "RaceCarBuilder.h"
#include "Suspension.h"
#include "Tire.h"
#include "Wing.h"

#include "CarBuilder.cpp"
#include "RaceCar.cpp"
#include "CarPart.cpp"
#include "Chassie.cpp"
#include "Engine.cpp"
#include "Hub.cpp"
#include "RaceCarBuilder.cpp"
#include "Suspension.cpp"
#include "Tire.cpp"
#include "Wing.cpp"

#include "../TireState/GoodCondition.h"
#include "../TireState/OKCondition.h"
#include "../TireState/BadCondition.h"
#include "../TireState/TireState.h"

#include "../TireState/TireState.cpp"
#include "../TireState/GoodCondition.cpp"
#include "../TireState/OKCondition.cpp"
#include "../TireState/BadCondition.cpp"

#include "../TireCompoundStrategy/TireCompound.h"
#include "../TireCompoundStrategy/SoftCompound.h"
#include "../TireCompoundStrategy/MediumCompound.h"
#include "../TireCompoundStrategy/HardCompound.h"

#include "../TireCompoundStrategy/TireCompound.cpp"
#include "../TireCompoundStrategy/SoftCompound.cpp"
#include "../TireCompoundStrategy/MediumCompound.cpp"
#include "../TireCompoundStrategy/HardCompound.cpp"

#include "../Strategy/Strategy.h"
#include "../Strategy/Sensible.h"
#include "../Strategy/Cautious.h"
#include "../Strategy/Aggressive.h"

#include "../Strategy/Sensible.cpp"
#include "../Strategy/Cautious.cpp"
#include "../Strategy/Aggressive.cpp"

#include "../Observer/PitStop.h"
#include "../Observer/ChangeTires.h"

#include "../Observer/ChangeTires.cpp"



int main(int argc, char const *argv[])
{
    RaceCarBuilder* builder = new CarBuilder();
    builder->addChassis();
	builder->addSuspension();
	builder->addWing();
	builder->addHub();
	builder->addEngine();
	builder->addTire("m");

    RaceCar* car = builder->getCar();

    cout << "Testing... " << endl;

    car->setDriverName("Piet");
    
    cout<< "Name: " << car->getDriverName() << endl;
    cout<< "Tire Grip: " <<car->getTireGrip() << endl;
    
    car->lap();

    for (int i = 0; i < 10; i++)
    {
        car->lap();
    }
    

    // cout<< "Strategy: " <<car->getStrategy()->execute() << endl;

    return 0;
}
