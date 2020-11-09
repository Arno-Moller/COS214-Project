#ifndef STARTRACECOMMAND_H
#define STARTRACECOMMAND_H

#include "Command.h"
#include "../Memento/Memento.h"
#include "../Memento/TeamState.h"
#include "../Memento/TeamStateCaretaker.h"

#include "../Prototype/Team.h"
#include "../Prototype/RacingTeam.h"
#include "../CarComposite/RaceCar.h"

#include "BuildTrackCommand.h"
#include "RaceConditionCommand.h"
#include "CreateTeamCommand.h"

#include "../Template/Championship.h"
#include "../Template/ConstructorsChampionship.h"
#include "../Template/DriversChampionship.h"

using  namespace std;
///Concrete Command Participant of the Command Design Pattern 
class StartRaceCommand: public Command
{
    private:
        Team** constructors; /**< The teams taking part in the race   */
        RaceCar** drivers; /**< The drivers taking part in the race   */
        BuildTrackCommand* trackBuilder; /**< Command to build the racing track  */
        vector<TrackSection> track; /**< The track sections of the track   */
        int laps = 0;/**< The number of laps the race has   */
        RaceConditionCommand* weather; /**< The weather command to get the weather of the race  */
        CreateTeamCommand* teamCom; /**<Command to create the teams taking part in the race   */
    
    public:

        
        StartRaceCommand();/// constructor 

        /**
        *  Constructor
        * @param teams
        * @param BuildtRackCommand
        */
        StartRaceCommand(Team** teams, BuildTrackCommand*);
       
        /**
        *  Constructor
        * @param CreateTeamCommand 
        * @param BuildtRackCommand
        */
        StartRaceCommand(CreateTeamCommand* , BuildTrackCommand*);
        
        ~StartRaceCommand();///destructor


        /**
        *  Function that executes all the commands 
        */
        void execute();
         
        /**
        *  Returns the teams
        * @return Team 
        */
        Team** getTeams();

        /**
        *  Sets the teams 
        * @param teams taking part
        */
        void setTeams(Team** teams);
        
        /**
        *  Returns the cars/drivers
        * @return RaceCar 
        */
        RaceCar** getCars();

        /**
        * Sets the drivers/cars 
        * @param cars
        */
        void setCars(RaceCar** cars);
        
        /**
        * returns the track builder 
        * @return the trackbuilder 
        */
        BuildTrackCommand* getTrackBuilder();

        /**
        *  sets the buildtrackcommand 
        * @param BuildTrackCommand 
        */
        void setTrackBuilder(BuildTrackCommand*);
        
        /**
        * returns the track sections
        * @return the trac sections
        */
        vector<TrackSection> getTrack();

        /**
        * sets the track sections 
        * @param track sections. 
        */
        void setTrack(vector<TrackSection>);  
};


#endif // STARTRACECOMMAND_H