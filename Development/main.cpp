#include <string>
#include <iostream>

#include <iostream>
#include <new>

#include "Memento/TeamStateCaretaker.h"
#include "Memento/Memento.h"
#include "Memento/TeamState.h"

#include "Memento/TeamStateCaretaker.cpp"
#include "Memento/Memento.cpp"
#include "Memento/TeamState.cpp"

#include "Observer/PitStop.h"
#include "Observer/ChangeTires.h"

#include "Observer/ChangeTires.cpp"

#include "Builder/Track.h"
#include "Builder/TrackSection.h"
#include "Builder/ConcreteTrack.h"
#include "Builder/TrackBuilder.h"
#include "Builder/TrackMaker.h"

#include "Builder/NinetyDegreeTurn.h"
#include "Builder/Hairpin.h"
#include "Builder/S_Section.h"
#include "Builder/SlightTurn.h"
#include "Builder/Straight.h"

#include "Builder/Track.cpp"
#include "Builder/TrackSection.cpp"
#include "Builder/ConcreteTrack.cpp"
#include "Builder/TrackBuilder.cpp"
#include "Builder/TrackMaker.cpp"

#include "Builder/NinetyDegreeTurn.cpp"
#include "Builder/Hairpin.cpp"
#include "Builder/S_Section.cpp"
#include "Builder/SlightTurn.cpp"
#include "Builder/Straight.cpp"

#include "Command/Command.h"
#include "Command/BuildTrackCommand.h"

#include "Command/BuildTrackCommand.cpp"

#include "CarComposite/CarBuilder.h"
#include "CarComposite/CarPart.h"
#include "CarComposite/Chassie.h"
#include "CarComposite/Engine.h"
#include "CarComposite/Hub.h"
#include "CarComposite/RaceCar.h"
#include "CarComposite/RaceCarBuilder.h"
#include "CarComposite/Suspension.h"
#include "CarComposite/Tire.h"
#include "CarComposite/Wing.h"

#include "CarComposite/CarBuilder.cpp"
#include "CarComposite/CarPart.cpp"
#include "CarComposite/Chassie.cpp"
#include "CarComposite/Engine.cpp"
#include "CarComposite/Hub.cpp"
#include "CarComposite/RaceCar.cpp"
#include "CarComposite/RaceCarBuilder.cpp"
#include "CarComposite/Suspension.cpp"
#include "CarComposite/Tire.cpp"
#include "CarComposite/Wing.cpp"

#include "TireState/GoodCondition.h"
#include "TireState/OKCondition.h"
#include "TireState/BadCondition.h"
#include "TireState/TireState.h"

#include "TireState/TireState.cpp"
#include "TireState/GoodCondition.cpp"
#include "TireState/OKCondition.cpp"
#include "TireState/BadCondition.cpp"

#include "TireCompoundStrategy/TireCompound.h"
#include "TireCompoundStrategy/SoftCompound.h"
#include "TireCompoundStrategy/MediumCompound.h"
#include "TireCompoundStrategy/HardCompound.h"

#include "TireCompoundStrategy/TireCompound.cpp"
#include "TireCompoundStrategy/SoftCompound.cpp"
#include "TireCompoundStrategy/MediumCompound.cpp"
#include "TireCompoundStrategy/HardCompound.cpp"

#include "Prototype/Team.h"
#include "Prototype/RacingTeam.h"

#include "Prototype/Team.cpp"
#include "Prototype/RacingTeam.cpp"

#include "Strategy/Strategy.h"

#include "Strategy/Sensible.h"
#include "Strategy/Cautious.h"
#include "Strategy/Aggressive.h"

#include "Strategy/Sensible.cpp"
#include "Strategy/Cautious.cpp"
#include "Strategy/Aggressive.cpp"

#include "Command/CreateTeamCommand.h"
#include "Command/CreateTeamCommand.cpp"

#include "Command/StartRaceCommand.h"
#include "Command/StartRaceCommand.cpp"

#include "Singleton/SingletonChampionship.h"
#include "Singleton/SingletonChampionship.cpp"

#include "Command/RaceConditionCommand.h"
#include "Command/RaceConditionCommand.cpp"

#include "StateWeather/Cloudy.h"
#include "StateWeather/Rainy.h"
#include "StateWeather/Sunny.h"
#include "StateWeather/Weather.h"
#include "StateWeather/Race.h"

#include "StateWeather/Cloudy.cpp"
#include "StateWeather/Rainy.cpp"
#include "StateWeather/Sunny.cpp"
#include "StateWeather/Weather.cpp"
#include "StateWeather/Race.cpp"

#include "Template/Championship.h"
#include "Template/ConstructorsChampionship.h"

#include "Template/Championship.cpp"
#include "Template/ConstructorsChampionship.cpp"
#include "Template/DriversChampionship.cpp"

#include "Command/SeasonalResultsCommand.h"
#include "Command/SeasonalResultsCommand.cpp"

using namespace std;

int main()
{
    SingletonChampionship* championship = SingletonChampionship::getInstance();
	championship->StartChampionship();
	return 0;
}



