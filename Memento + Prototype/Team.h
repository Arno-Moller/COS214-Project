#ifndef TEAM_H
#define TEAM_H

#include "Memento.h"
//the originator participant of the meneto design pattern 
class Team
{
protected:
    RaceCar* carOne;
    RaceCar* carTwo;
    
public:
    Team();
    ~Team();

    void construct();

    Memento* createMemento();
    void setMemento(Memento* mem);

    virtual Team* clone() = 0;

    RaceCar* getCarOne();
    void setCarOne(RaceCar* one);
    RaceCar* getCarTwo();
    void setCarTwo(RaceCar* two);
};

#endif // TEAM_H