#ifndef TIRECOMPOUND_H
#define TIRECOMPOUND_H

using namespace std;
// strategy participant of the strategy design pattern 
class TireCompound
{
protected:
    int grip; // tire grip 
    int wear; // tire wear 
    int rate; // tire rate at wich the tire wears  

public:
    TireCompound();//constructor 
    ~TireCompound();//destructor 

    virtual int getGrip() = 0; // abstract interface to get the grip 
    virtual void setGrip(int grip) = 0; // abstract interface to set the grip 
    virtual int getWear() = 0; // abstract interface to get the wear of the tires 
    virtual void setWear(int wear) = 0; // abstract interface to set the wear of the tires
    virtual int getRate() = 0; // abstract interface to get the rate 
    virtual void setRate(int wear) = 0; // abstract interface to set the rate 

};

#endif // TIRECOMPOUND_H