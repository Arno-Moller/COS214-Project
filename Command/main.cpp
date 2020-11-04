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

int main() 
{
    Command* test = new BuildTrackCommand();
    test->execute();

    delete test;

    return 0;
}
