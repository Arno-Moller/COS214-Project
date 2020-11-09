#include <iostream>
#include <new>

#include "../Memento/Memento.h"
#include "../Memento/TeamState.h"
#include "../Memento/TeamStateCaretaker.h"

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

#include "../Command/Command.h"
#include "../Command/BuildTrackCommand.h"

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

#include "../TireState/GoodCondition.h"
#include "../TireState/OKCondition.h"
#include "../TireState/BadCondition.h"
#include "../TireState/TireState.h"


#include "../TireCompoundStrategy/TireCompound.h"
#include "../TireCompoundStrategy/SoftCompound.h"
#include "../TireCompoundStrategy/MediumCompound.h"
#include "../TireCompoundStrategy/HardCompound.h"

#include "../Prototype/Team.h"
#include "../Prototype/RacingTeam.h"

#include "../Strategy/Strategy.h"

#include "../Strategy/Sensible.h"
#include "../Strategy/Cautious.h"
#include "../Strategy/Aggressive.h"

#include "../Command/CreateTeamCommand.h"

#include "../Command/StartRaceCommand.h"

#include "../Command/SeasonalResultsCommand.h"

#ifndef SingletonChampionship_h
#define SingletonChampionship_h

//This is the director participant of the Builder Design Pattern 
class SingletonChampionship
{
    public:
        static SingletonChampionship* getInstance();
        void StartChampionship();

    protected:
        SingletonChampionship();//constructor 
        ~SingletonChampionship();//destrucor 

        //SingletonChampionship(SingletonChampionship &); 

    private:
        static SingletonChampionship* championship;

};
#endif
