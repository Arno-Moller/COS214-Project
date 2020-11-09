#ifndef TrackSection_h
#define TrackSection_h

#include <iostream>

using namespace std;
///This is the Composite participant of the Composite Design pattern
class TrackSection
{
    public:
       /**
       *  returns the string of the tracksection 
       * @return  string name 
       */
        string getName();

        /**
       *  a get method to get the risk value of the piece of track 
       * @return  int risk value 
       */
        int getRiskValue(); 

       /**
       *  a get method to get the distance  of the piece of track 
       * @return  int distance of track 
       */
        int getDistance(); 

    protected:
        string name;  /**< name of the track section    */ 
        int riskValue; /**< The risk value of driving on the piece of track eg you have a higher risk of crashing on a hairpin than on a straight    */ 
        int distance;/**< the distance of the piece of track    */ 
};
#endif


