#ifndef RACINGTEAM_H
#define RACINGTEAM_H

#include "Team.h"
#include "../CarComposite/CarBuilder.h"
#include "../CarComposite/RaceCar.h"
#include "../CarComposite/CarPart.h"
// #include "../Memento/Memento.h"
#include "../Memento/TeamState.h"
#include "../Memento/TeamStateCaretaker.h"

class Memento;
///concrete prototype of the prototype design pattern 
class RacingTeam: public Team
{
private:
    
public:
    RacingTeam();///constructor

    /**
     * Constrcutor That takes in the tire compound of the car(soft , medium , hard)
     * @param string tire compound 
     */
    RacingTeam(string tireCompound);

    /**
     * Constrcutor That takes in the racing team 
     * @param racingTeam  tire compound 
     */
    RacingTeam(RacingTeam&);//constructor 
    
    ~RacingTeam();///destructor 

    /**
    * Method that builds the car 
	* It adds all the elements to the car
    */
    void buildCar();


    /**
    *  Method that allows both cars of the team to do laps 
    */
    void lap(); 

    /**
    *  method that sets the tire Compound(soft , hard , medium)
	* @param tireCompound 
    */
    void setTireCompound(string tireCompound);
    
    /**
    *  method that returns the first car of the team 
	* @return RaceCar object of the first car of the team 
    */
    RaceCar* getCarOne(); 
    CarPart* getCarOnePart(); 

    /**
    *  method that returns the second car of the team 
	* @return RaceCar object of the second car of the team 
    */
    RaceCar* getCarTwo();
    CarPart* getCarTwoPart(); 

    /**
    *  method that sets the first car of the team 
	* @return RaceCar object of the first car of the team 
     */
    void setCarOne(RaceCar* car1);

    /**
    * Abstract interface method that sets the second car of the team 
	* @return RaceCar object of the first car of the team 
    */
    void setCarTwo(RaceCar* car2); 
    
    /**
    * Abstract interface method that clones the team 
	* @return Team object
    */
    Team* clone();

    /**
    * Abstract interface method that returns the teams points 
	* @return int amount of the points the team has made
    */
    int getTeamPoints();

    void setTeamPoints();
    void setTeamPoints(int points);

    string getTeamName();
    void setTeamName(string name);

    Memento* createMemento();

    /**
    *  method that loads the memento that was previously stored and reinstates it
	* @return int amount of the points the team has made
    */
	void loadMemento(Memento* m);

};

#include "../Memento/Memento.h"

#endif // RACINGTEAM_H