#include <iostream>
#include <new>

#include "Memento.h"
#include "TeamState.h"
#include "TeamStateCaretaker.h"

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

#include "SeasonalResultsCommand.h"

#ifndef SingletonChampionship_h
#define SingletonChampionship_h

//This is the director participant of the Builder Design Pattern 
class SingletonChampionship
{
    public:
        
        /**
        *  method that returns a singleton object of the championship
        * @return SingletonChampionship 
        */
        static SingletonChampionship* getInstance();

        /**
        *  method to start the championship 
        */
        void StartChampionship();

    protected:
        SingletonChampionship();///constructor 
       
        ~SingletonChampionship();///destrucor 

    private:
        static SingletonChampionship* championship;/**< The singleton object of the championship  */ 
        Command* command;

};
#endif
