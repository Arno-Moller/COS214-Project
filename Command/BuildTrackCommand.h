#ifndef BuildTrackCommand_h
#define BuildTrackCommand_h

#include <iostream>
#include <list>
#include <iterator>

#include "Command.h"
#include "../Builder/TrackBuilder.h"
#include "../Builder/ConcreteTrack.h"

using namespace std;        

class BuildTrackCommand : public Command
{
    public:
        BuildTrackCommand();
        ~BuildTrackCommand();
        void execute();
        ConcreteTrack* getTrack();
    
    private:
        TrackBuilder* trackBuilder;

};

#endif
