#ifndef HARDCOMPOUND_H
#define HARDCOMPOUND_H

#include "TireCompound.h"

using namespace std;
///concrete strategy participant of the strategy design pattern 
class HardCompound: public TireCompound
{

public:
    HardCompound();/// constructor 
    ~HardCompound(); /// destructor 


    /**
    *  get the grip of the tire
    * @return  int grip of the car  default value of 100
    * 
    */
    int getGrip(); 

    /**
    * sets the grip of the tires 
    * @param grip int 
    */
    void setGrip(int grip); 

    /**
    *  return the wear of the tire
    * @return  int wear of the tire
    * 
    */
    int getWear(); 

    /**
    * sets the wear of the tire 
    * @param wear int 
    */
    void setWear(int wear);/// set the wear of the tire 

    /**
    *  return the wear of the tire
    * @return  double rate of the tires
    * 
    */
    double getRate(); /// returns the rate at wich the tire wears 
    

    TireCompound* clone();
};

#endif // HARDCOMPOUND_H