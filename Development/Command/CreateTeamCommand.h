#ifndef CREATETEAMCOMMAND_H
#define CREATETEAMCOMMAND_H

#include "Command.h"
#include "../Prototype/Team.h"
#include "../Prototype/RacingTeam.h"
#include "../Memento/TeamStateCaretaker.h"

using namespace std;

class CreateTeamCommand: public Command
{
public:
    CreateTeamCommand();/// constructor

    ~CreateTeamCommand();///destructor

    /**
    *  Function that executes all the commands 
    */
    void execute();

    /**
    *  Returns the teams
    * @return Team 
    */
    Team** getTeams();

    /**
    *  Sets the teams 
    * @param teams taking part
     */
    void restoreTeams();

private:
    Team** teams; /**< The teams    */
    TeamStateCaretaker** teamSaves;/**< The team state caretakers  */

    /**< array of team names   */
    string names[10] = {"Mercedes AMG F1", "McLaren", "Ferrari", "Racing Point", "Red Bull Racing", "AlphaTauri", "Haas F1", "Renault", "Alfa Romeo Racing", "Williams Racing"};
    
    /**< array of driver names for driver 1 */
    string driverOneNames[10] = {"Lewis Hamilton", "Lando Norris", "Charles Leclerc", "Lance Stroll", "Max Verstappen", "Pierre Gasly", "Romain Grosjean", "Daniel Ricciardo", "Kimi Raikkonen", "George Russel"};
    
    /**< array of driver names for driver 2  */
    string driverTwoNames[10] = {"Valterri Bottas", "Carlos Sainz", "Sebastian Vettel", "Sergio Perez", "Alex Albon", "Daniil Kvyat", "Kevin Magnussen", "Esteban Ocon", "Antonio Giovinazzi", "Nicholas Latifi"};
    bool doesTheTeamsExist = false;/**< boolean to check if the teams exist  */
};


#endif // CREATETEAMCOMMAND_H