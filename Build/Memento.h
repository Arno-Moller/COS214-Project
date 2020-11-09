#ifndef MEMENTO_H
#define MEMENTO_H

#include "TeamState.h"
#include "RaceCar.h"
#include "Team.h"
#include "RacingTeam.h"
///the memento participant of the memento design pattern 
class Memento
{
private:
    TeamState* state = nullptr; /**< The state of the teams that is stored   */ 

public:

    /**
     *  Constructor to set the team 
     * @param Team object to store in the memento 
     */
    Memento(Team* team); 

    /**
     *  Constructor that sets the cars of the team 
     * @param carOne the first car of the team 
     * @param carTwo the second car of the team 
     */
    Memento(RaceCar* carOne, RaceCar* carTwo);
   
    ~Memento();/// destructor 

     /**
     *  Returns the state of the team 
     * @return TeamState pointer that is stored
     */
    TeamState* getState();

     /**
     *  Sets the team to store
     * @param Team object to store in the memento 
     */
    void setState(Team* team);// sets the state of the team 

    /**
     *  Sets the cars in the teams 
     * @param carOne the first car of the team 
     * @param carTwo the second car of the team 
     */
    void setState(RaceCar* carOne, RaceCar* carTwo);
};


#endif // MEMENTO_H