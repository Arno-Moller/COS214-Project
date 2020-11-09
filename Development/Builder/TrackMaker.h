#include <iostream>
#include <map>
#include <cstring>
#include <list>
#include <iterator>

#include "Track.h"
#include "ConcreteTrack.h"

using namespace std;
///This is the client of the Composite Design Pattern 
#ifndef TrackMaker_h
#define TrackMaker_h
///This is the concrete builder class of The Builder design pattern 
class TrackMaker : public ConcreteTrack
{
    public:
        TrackMaker();/// a default constructor 

       /**
       *  Constructor taking in a string name 
       * @param name
       */
        TrackMaker(string);

        ~TrackMaker();///Destructor 
        /**
         * @brief adds a ninety degree turn section to the track
         * @param distance
         */
        void addNinetyDegree(int);

        /**
         * @brief adds a Straight section to the track 
         * @param distance
         */
        void addStraight(int);

        /**
         * @brief  adds a Hairpin section to the track object 
         * @param distance
         */
        void addHairpin(int);

        /**
         * @brief adds a S section to the track object 
         * @param distance
         */
        void addS_section(int);

        /**
         * @brief adds a slight turn to the track object 
         * @param distance
         */
        void addSlightTurn(int);

        /**
         * @brief Get the Track object
         * 
         * @return vector<TrackSection> 
         */
        vector<TrackSection> getTrack(); 

        /**
         * @brief Get the Num Sections object
         * 
         * @return int 
         */
        int getNumSections();///returns the number of track sections.

        /**
         * @brief prints out how the track currently looks like. eg the amount of straights or hairpins 
         * 
         */
        void showTrack();

    private:
        Track* track; /// Track object to add the different sections to 
};
#endif
