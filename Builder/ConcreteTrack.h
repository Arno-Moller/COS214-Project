#ifndef ConcreteTrack_h
#define ConcreteTrack_h

#include <iostream>
#include <list>
#include <vector>

#include "Track.h"

using namespace std;
///The builder participant in the Builder design Pattern 
class ConcreteTrack
{
    public:

        ConcreteTrack(); ///Constructor

        /**
         * @brief interface for concrete builder 
         * 
         */
        virtual void addNinetyDegree(int) = 0;
        virtual void addStraight(int) = 0;
        virtual void addHairpin(int) = 0;
        virtual void addS_section(int) = 0;
        virtual void addSlightTurn(int) = 0;
        virtual int getNumSections() = 0;
        virtual vector<TrackSection> getTrack() = 0; 
        virtual void showTrack() = 0;

    private:

};

#endif
