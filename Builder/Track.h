#include <iostream>
#include <map>
#include <cstring>
#include <list>
#include <iterator>
#include <vector>

#include "TrackSection.h"
#include "SlightTurn.h"
#include "Straight.h"
#include "S_Section.h"
#include "NinetyDegreeTurn.h"
#include "Hairpin.h"

using namespace std;
//This is the component participant of the Builder Design Pattern 
#ifndef Track_h
#define Track_h
//This class is the product participant of the Builder Design Pattern 
class Track
{
    public:
        Track();// default constructor 
        Track(string n); // string with the name of the track 

        string getTrackName(); // get method for retrieving the name of the track 
        int getTrackDistance();// get method for retrieving the distance of the track 
        int getTrackRisk(); // get method for retrieving the risk of the track 
        int getSectionCount(); // get method for retrieving the number of section of the track

        void addSection(TrackSection*); // function to add a Track Section to the track 
        void showTrack(); // display the track 
        vector<TrackSection> getTrack(); //return track list

    private:
        vector<TrackSection> trackSection; // a list containing all the different track section making up the track 
        string trackName; // the name of the track 
        int trackDistance = 0; // the distance of the track 
        int trackRisk; // the risk of the track 
        int numSections; // the number of Track Sections that the track consists of 
};
#endif
