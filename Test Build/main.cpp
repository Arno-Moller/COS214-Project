#include <string>
#include <iostream>
#include <new>

#include "TeamStateCaretaker.h"
#include "Memento.h"
#include "TeamState.h"
#include "PitStop.h"
#include "ChangeTires.h"
#include "Track.h"
#include "TrackSection.h"
#include "ConcreteTrack.h"
#include "TrackBuilder.h"
#include "TrackMaker.h"
#include "NinetyDegreeTurn.h"
#include "Hairpin.h"
#include "S_Section.h"
#include "SlightTurn.h"
#include "Straight.h"
#include "Command.h"
#include "BuildTrackCommand.h"
#include "CarBuilder.h"
#include "CarPart.h"
#include "Chassie.h"
#include "Engine.h"
#include "Hub.h"
#include "RaceCar.h"
#include "RaceCarBuilder.h"
#include "Suspension.h"
#include "Tire.h"
#include "Wing.h"
#include "GoodCondition.h"
#include "OKCondition.h"
#include "BadCondition.h"
#include "TireState.h"
#include "TireCompound.h"
#include "SoftCompound.h"
#include "MediumCompound.h"
#include "HardCompound.h"
#include "Team.h"
#include "RacingTeam.h"
#include "Strategy.h"
#include "Sensible.h"
#include "Cautious.h"
#include "Aggressive.h"


#include "CreateTeamCommand.h"


#include "StartRaceCommand.h"


#include "SingletonChampionship.h"

#include "RaceConditionCommand.h"

#include "Cloudy.h"
#include "Rainy.h"
#include "Sunny.h"
#include "Weather.h"
#include "Race.h"


#include "Championship.h"
#include "ConstructorsChampionship.h"
#include "DriversChampionship.h"


#include "SeasonalResultsCommand.h"

using namespace std;

int main()
{
    SingletonChampionship* championship = SingletonChampionship::getInstance();
	championship->StartChampionship();
	return 0;
}



