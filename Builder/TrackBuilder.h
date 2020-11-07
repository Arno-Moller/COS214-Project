#ifndef TrackBuilder_h
#define TrackBuilder_h

#include "TrackMaker.h"
//This is the director participant of the Builder Design Pattern 
class TrackBuilder
{
    public:
        TrackBuilder();//constructor 
        TrackBuilder(string, int);//constructor 
        ~TrackBuilder();//destrucor 

        int getLaps();
        string getName();
        string getLocation();

        void construct(); // this builds the track or constructs the track consisting of the section we would want 
        void display();//this displays the track 
        ConcreteTrack* getTrack();//returns this track
        
    private:
        ConcreteTrack* concreteTrack;//Concrete Track object which is the builder participant in the Builder Design Pattern 
        int laps = 0;
        string name;
        string location;
    
};
#endif
