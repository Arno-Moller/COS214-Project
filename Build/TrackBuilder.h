#ifndef TrackBuilder_h
#define TrackBuilder_h

#include "TrackMaker.h"
//This is the director participant of the Builder Design Pattern 
class TrackBuilder
{
    public:
        TrackBuilder();//constructor 

        /**
       *  Constructor taking in a string name 
       * @param name
       */
        TrackBuilder(string, int);//constructor 
        ~TrackBuilder();//destrucor 
        /**
         * @brief Get the Laps object
         * 
         * @return int 
         */
        int getLaps();

        /**
         * @brief Get the Name object
         * 
         * @return string 
         */
        string getName();

        /**
         * @brief Get the Location object
         * 
         * @return string 
         */
        string getLocation();


        /**
         * @brief this builds the track or constructs the track consisting of the section we would want 
         * 
         */
        void construct(); 

        /**
         * @brief this builds the track or constructs the track consisting of the section we would want 
         * 
         */
        void construct(string, int); 

        /**
         * @brief this displays the track
         * 
         */
        void display();

        /**
         * @brief Get the Track object
         * 
         * @return ConcreteTrack* 
         */
        ConcreteTrack* getTrack();
        
    private:
        ConcreteTrack* concreteTrack;/**< concrete track    */
        int laps = 0;/**< number of laps    */
        string name;/**< name of the track    */
        string location;/**< the location of track    */
    
};
#endif
