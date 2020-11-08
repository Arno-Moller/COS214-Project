#ifndef TEAMSTATE_H
#define TEAMSTATE_H

#include "../CarComposite/RaceCar.h"
#include "../CarComposite/CarBuilder.h"
#include "../CarComposite/CarPart.h"
#include "../Prototype/Team.h"
#include "../Prototype/RacingTeam.h"
/// Originator participant of the Memento Design Pattern 
class TeamState
{
private:
    RaceCar* carOne; /**< The first car of the team    */ 
    RaceCar* carTwo; /**< The second car of the team   */
    string teamName; 
public:

    /**
     *  Constructor that sets the cars of the team 
     * @param carOne the first car of the team 
     * @param carTwo the second car of the team 
     */
    TeamState(RaceCar* carOne, RaceCar* carTwo);
    TeamState(Team* teams);

    ~TeamState();//destructor

     /**
     *  Returns the state of the team 
     * @return TeamState pointer that is stored
     */
    TeamState* getTeamState();//returns the state of the team 

     /**
     *  Returns the first race car of the team 
     * @return CarOne of the team 
     */
    RaceCar* getCarOne();

     /**
     *  Returns the second race car of team 
     * @return Car two of the team 
     */
    RaceCar* getCarTwo(); 

    string getTeamName();//returns the state of the team
};



#endif // TeamState_H