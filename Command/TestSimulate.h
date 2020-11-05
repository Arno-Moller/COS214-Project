#ifndef TestSimulate_h
#define TestSimulate_h

#include <iostream>

#include "Command.h"
#include "BuildTrackCommand.h"
#include "../Builder/TrackBuilder.h"
#include "../Builder/ConcreteTrack.h"

using namespace std;        

class TestSimulate : public Command
{
    public:
        TestSimulate();
        ~TestSimulate();
        void execute();
    private:
        list <TrackSection> track;
};

#endif