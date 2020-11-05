#ifndef MEDIUMCOMPOUND_H
#define MEDIUMCOMPOUND_H

#include "TireCompound.h"

using namespace std;
/// concrete strategy participant from the strategy design pattern 
class MediumCompound: public TireCompound
{
public:
    MediumCompound();///constructor 
    ~MediumCompound(); // destructor 
    
    /**
    *   get the grip of the tire
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
    void setWear(int wear); 

     /**
    *  return the wear of the tire
    * @return  double rate of the tires
    * 
    */
    double getRate(); 
   
};
#endif // MEDIUMCOMPOUND_H