#include <iostream>
#include <map>
#include <cstring>
#include <list>
#include <iterator>

#include "Track.h"
#include "ConcreteTrack.h"

using namespace std;
//This is the client of the Composite Design Pattern 
#ifndef TrackMaker_h
#define TrackMaker_h
//This is the concrete builder class of The Builder design pattern 
class TrackMaker : public ConcreteTrack
{
    public:
        TrackMaker();// a default constructor 
        TrackMaker(string);//constructor that takes a string parameter wich is the name of the track

        ~TrackMaker();//Destructor 
        
        void addNinetyDegree(int);// adds a ninety degree turn section to the track 
        void addStraight(int);// adds a Straight section to the track 
        void addHairpin(int);// adds a Hairpin section to the track object 
        void addS_section(int);// adds a S section to the track object 
        void addSlightTurn(int);//adds a slight turn to the track object 
        list<TrackSection> getTrack(); //return track list
        int getNumSections();
        void showTrack();//prints out how the track currently looks like. eg the amount of straights or hairpins 

    private:
        Track* track; // Track object to add the different sections to 
};
#endif
