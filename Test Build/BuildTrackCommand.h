#ifndef BuildTrackCommand_h
#define BuildTrackCommand_h

#include <iostream>
#include <list>
#include <iterator>

#include "Command.h"
#include "TrackBuilder.h"
#include "ConcreteTrack.h"

using namespace std;        

class BuildTrackCommand : public Command
{
    public:
        BuildTrackCommand();///constructor

        /**
        *  Constructor
        * @param location
        * @param laps
        */
        BuildTrackCommand(string, int);

        ~BuildTrackCommand();///destructor

         /**
         *  Function that executes all the commands 
         */
        void execute();

        /**
        *  Returns the track
        * @return ConcreteTrack
        */
        ConcreteTrack* getTrack();

        /**
        *  Returns the trackbuilder
        * @return TrackBuilder
        */
        TrackBuilder* getTrackBuilder();
    
    private:
        TrackBuilder* trackBuilder; /**< the track builder  */
        string location;/**< location of the track  */
        int laps;/**< the number of laps  */

};

#endif
