#include <iostream>

#include "Track.h"
#include "TrackSection.h"
#include "ConcreteTrack.h"
#include "TrackBuilder.h"
#include "TrackMaker.h"

#include "Track.cpp"
#include "TrackSection.cpp"
#include "ConcreteTrack.cpp"
#include "TrackBuilder.cpp"
#include "TrackMaker.cpp"

#include "NinetyDegreeTurn.h"
#include "Hairpin.h"
#include "S_Section.h"
#include "SlightTurn.h"
#include "Straight.h"

#include "NinetyDegreeTurn.cpp"
#include "Hairpin.cpp"
#include "S_Section.cpp"
#include "SlightTurn.cpp"
#include "Straight.cpp"


//THIS IS A TEMPORARY CLASS THAT WILL BE REPLACED, BUT IS USED FOR TESTING AS A CLIENT IN THE BUILDER
int main() 
{
    TrackBuilder* test = new TrackBuilder();
    test->construct();
    test->display();

    delete test;

    return 0;
}
