#ifndef SOFTCOMPOUND_H
#define SOFTCOMPOUND_H

#include "TireCompound.h"

using namespace std;
/// concrete strategy participant of the strategy design pattern 
class SoftCompound: public TireCompound
{
    
public:
    SoftCompound(); /// constructor 
    ~SoftCompound(); /// destructor 

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



#endif // SOFTCOMPOUND_H