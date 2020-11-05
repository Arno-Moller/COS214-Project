#ifndef BuildTrackCommand_h
#define BuildTrackCommand_h

#include <iostream>

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
    private:
        TrackBuilder* trackBuilder;
        ConcreteTrack* track;
        string trackName;
};

#endif
