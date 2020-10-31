#ifndef TrackBuilder_h
#define TrackBuilder_h

#include "TrackMaker.h"

class TrackBuilder
{
    public:
        TrackBuilder();
        ~TrackBuilder();

        void construct();
        void display();
    private:
        ConcreteTrack* concreteTrack;
    
};
#endif
