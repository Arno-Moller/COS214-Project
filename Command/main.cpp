#include <iostream>

#include "../Builder/Track.h"
#include "../Builder/TrackSection.h"
#include "../Builder/ConcreteTrack.h"
#include "../Builder/TrackBuilder.h"
#include "../Builder/TrackMaker.h"

#include "../Builder/NinetyDegreeTurn.h"
#include "../Builder/Hairpin.h"
#include "../Builder/S_Section.h"
#include "../Builder/SlightTurn.h"
#include "../Builder/Straight.h"

#include "../Builder/Track.cpp"
#include "../Builder/TrackSection.cpp"
#include "../Builder/ConcreteTrack.cpp"
#include "../Builder/TrackBuilder.cpp"
#include "../Builder/TrackMaker.cpp"

#include "../Builder/NinetyDegreeTurn.cpp"
#include "../Builder/Hairpin.cpp"
#include "../Builder/S_Section.cpp"
#include "../Builder/SlightTurn.cpp"
#include "../Builder/Straight.cpp"

#include "Command.h"
#include "BuildTrackCommand.h"

#include "BuildTrackCommand.cpp"

#include "../CarComposite/CarBuilder.h"
#include "../CarComposite/CarPart.h"
#include "../CarComposite/Chassie.h"
#include "../CarComposite/Engine.h"
#include "../CarComposite/Hub.h"
#include "../CarComposite/RaceCar.h"
#include "../CarComposite/RaceCarBuilder.h"
#include "../CarComposite/Suspension.h"
#include "../CarComposite/Tire.h"
#include "../CarComposite/Wing.h"

#include "../CarComposite/CarBuilder.cpp"
#include "../CarComposite/CarPart.cpp"
#include "../CarComposite/Chassie.cpp"
#include "../CarComposite/Engine.cpp"
#include "../CarComposite/Hub.cpp"
#include "../CarComposite/RaceCar.cpp"
#include "../CarComposite/RaceCarBuilder.cpp"
#include "../CarComposite/Suspension.cpp"
#include "../CarComposite/Tire.cpp"
#include "../CarComposite/Wing.cpp"

int main() 
{
    RaceCarBuilder* car = new CarBuilder();
    car->addChassis();
    car->addSuspension();
    car->addWing();
    car->addHub();
    car->addEngine();
    car->addTire("soft");

    BuildTrackCommand* tmp = new BuildTrackCommand();
    tmp->execute();
    list <TrackSection> track = tmp->getTrack()->getTrack();

    list <TrackSection> :: iterator it;
    int sectionCount = 1;

    for(it = track.begin(); it != track.end(); ++it)
    {
        cout << "Track Section " << sectionCount << ":" 
                << "\n\tSection type: " << it->getName() 
                << "\n\tRisk of trackSection: " << it->getRiskValue()
                << "\n\tDistance of trackSection: " << it->getDistance() 
                << "\n" << endl;
        sectionCount++;
    }

    return 0;
}
