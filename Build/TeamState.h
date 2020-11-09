#ifndef TEAMSTATE_H
#define TEAMSTATE_H

#include "RaceCar.h"
#include "CarBuilder.h"
#include "CarPart.h"
#include "Team.h"
#include "RacingTeam.h"
/// Originator participant of the Memento Design Pattern 
class TeamState
{
private:
    RaceCar* carOne; /**< The first car of the team    */ 
    RaceCar* carTwo; /**< The second car of the team   */
    string teamName; /**< the teams name   */ 
    int points;/**< the points  */ 
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

    /**
     *  Returns the name of the team 
     * @return string of the teams name 
     */
    string getTeamName();

    /**
     *  Returns the points of the team 
     * @return int of the teams points
     */
    int getTeamPoints();

    /**
     *  Returns the team 
     * @return team 
     */
    Team* getTeam();
};



#endif // TeamState_H