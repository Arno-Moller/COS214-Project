#ifndef TIRECOMPOUND_H
#define TIRECOMPOUND_H

using namespace std;
/// strategy participant of the strategy design pattern 
class TireCompound
{
protected:
    int grip; /**< the grip of the tire  */  
    int wear; /**< the wear of the tire  */ 
    int rate; /**< the rate of the tire  */   

public:
    TireCompound();///constructor 
    ~TireCompound();///destructor 

    /**
    *  abstract interface to get the grip 
    * @return  int grip of the car  default value of 100
    * 
    */
    virtual int getGrip() = 0; 
    
    /**
    * abstract interface to set the grip of the tires
    * @param grip int 
    */
    virtual void setGrip(int grip) = 0; // abstract interface to set the grip 
    
    /**
    *  abstract interface to get the wear 
    * @return  int wear of the car default value of 0 
    */
    virtual int getWear() = 0; 

    /**
    * abstract interface to set the wear of the tires
    * @param wear int 
    */
    virtual void setWear(int wear) = 0; 

    /**
    *  abstract interface to get the rate at wich tires wear 
    * @return  double rate of the car  
    */
    virtual double getRate() = 0; 

    /**
    *  abstract interface to clone the TireCompound
    * @return  TireCompound clone 
    */
    virtual TireCompound* clone() = 0;
     

};

#endif // TIRECOMPOUND_H