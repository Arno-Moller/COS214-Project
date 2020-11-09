#ifndef TEAMSTATECARETAKER_H
#define TEAMSTATECARETAKER_H

#include "Memento.h"
///This is the caretaker participant in the memento design pattern 
class TeamStateCaretaker
{
private:
    Memento* backupTeam; /**< The state of the teams that is stored   */
public:
    
    /**
    *  Constructor that sets the memento object  
     * @param backupteam 
     */
    TeamStateCaretaker(Memento* backupTeam);

    ~TeamStateCaretaker();///destructor
    
    /**
    *  method that returns the mento of the team 
     * @return Mento of the backup team 
     */
    Memento* getBackupTeam();

    /**
    *  reinstate the team after a race (fix the cars or do a pitstop )
     * @param backupteam 
     */
    void setBackupTeam(Memento* backupTeam);//
};

#endif // TEAMSTATECARETAKER_H