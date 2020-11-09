#ifndef TrackSection_h
#define TrackSection_h

#include <iostream>

using namespace std;
//This is the Composite participant of the Composite Design pattern
class TrackSection
{
    public:
        string getName(); ///a get method to get the name of the piece of track
        int getRiskValue(); /// a get method to get the risk value of the piece of track 
        int getDistance(); /// a get method to get the distance of the piece of track

    protected:
        string name;  
        int riskValue; /**< The risk value of driving on the piece of track eg you have a higher risk of crashing on a hairpin than on a straight    */ 
        int distance;/**< the distance of the piece of track    */ 
};
#endif


