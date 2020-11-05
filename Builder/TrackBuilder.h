#ifndef TrackBuilder_h
#define TrackBuilder_h

#include "TrackMaker.h"
//This is the director participant of the Builder Design Pattern 
class TrackBuilder
{
    public:
        TrackBuilder();//constructor 
        ~TrackBuilder();//destrucor 

        void construct(); // this builds the track or constructs the track consisting of the section we would want 
        void display();//this displays the track 
        ConcreteTrack* getTrack();//returns this track
    private:
        ConcreteTrack* concreteTrack;//Concrete Track object wich is the builder participant in the Builder Design Pattern 
    
};
#endif
