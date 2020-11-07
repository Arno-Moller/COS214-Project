#ifndef MEMENTO_H
#define MEMENTO_H

#include "TeamState.h"
#include "../CarComposite/RaceCar.h"
#include "../Prototype/Team.h"
#include "../Prototype/RacingTeam.h"
///the memnto participant of the memento design pattern 
class Memento
{
private:
    TeamState* state; /**< The state of the teams that is stored   */ 

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