#include "BuildTrackCommand.h"

BuildTrackCommand::BuildTrackCommand()
{
    trackBuilder = new TrackBuilder();
    location = "";
    int laps  = 10;
}

BuildTrackCommand::BuildTrackCommand(string n, int l)
{
    trackBuilder = new TrackBuilder(n, l);
    location = n;
    int laps  = l;
}

BuildTrackCommand::~BuildTrackCommand()
{
    delete trackBuilder;
    trackBuilder = nullptr;
}

void BuildTrackCommand::execute()
{
    trackBuilder->construct(location, 10);
}

ConcreteTrack* BuildTrackCommand::getTrack()
{
    return trackBuilder->getTrack();
}

TrackBuilder* BuildTrackCommand::getTrackBuilder()
{
    return trackBuilder;
}