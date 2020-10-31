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



int main() 
{
    TrackBuilder* test = new TrackBuilder();
    test->construct();
    test->display();

    return 0;
}
