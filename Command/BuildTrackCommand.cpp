#include "BuildTrackCommand.h"

BuildTrackCommand::BuildTrackCommand()
{
    trackBuilder = new TrackBuilder();
}

BuildTrackCommand::~BuildTrackCommand()
{
    delete trackBuilder;
    trackBuilder = nullptr;
}

void BuildTrackCommand::execute()
{
    trackBuilder->construct();
    //trackBuilder->display();
}

ConcreteTrack* BuildTrackCommand::getTrack()
{
    return trackBuilder->getTrack();
}

TrackBuilder* BuildTrackCommand::getTrackBuilder()
{
    return trackBuilder;
}