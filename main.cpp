#include <string>
#include <iostream>

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

#include "Prototype/Team.h"
#include "Prototype/Team.cpp"
#include "Prototype/RacingTeam.h"
#include "Prototype/RacingTeam.cpp"

#include "TireCompoundStrategy/TireCompound.h"
#include "TireCompoundStrategy/SoftCompound.h"
#include "TireCompoundStrategy/MediumCompound.h"
#include "TireCompoundStrategy/HardCompound.h"
#include "TireCompoundStrategy/TireCompound.cpp"
#include "TireCompoundStrategy/SoftCompound.cpp"
#include "TireCompoundStrategy/MediumCompound.cpp"
#include "TireCompoundStrategy/HardCompound.cpp"

#include "TireState/GoodCondition.h"
#include "TireState/GoodCondition.cpp"
#include "TireState/BadCondition.h"
#include "TireState/BadCondition.cpp"
#include "TireState/OKCondition.h"
#include "TireState/OKCondition.cpp"
#include "TireState/TireState.h"
#include "TireState/TireState.cpp"

using namespace std;

int main(){
	
	Team *t = new RacingTeam();
	t->setTireCompound("h");
	t->buildCar();
	
	//simulate laps
	for(int i = 0; i < 52; i++)
		t->lap();
	
	
	delete t;
	return 0;
}



