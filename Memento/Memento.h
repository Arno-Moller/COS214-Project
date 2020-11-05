#ifndef MEMENTO_H
#define MEMENTO_H

#include "TeamState.h"
#include "../CarComposite/RaceCar.h"
#include "../Prototype/Team.h"
//the memnto participant of the memento design pattern 
class Memento
{
private:
    TeamState* state; // a state of the teams to store 

public:
    Memento(Team* team); // a constructor that takes in a team 
    Memento(RaceCar* carOne, RaceCar* carTwo);// a constructor that takes in two race car objects 
    ~Memento();// destructor 

    TeamState* getState();//returns the state of the team 
    void setState(Team* team);// sets the state of the team 
    void setState(RaceCar* carOne, RaceCar* carTwo);// sets the state of the team 
};


#endif // MEMENTO_H