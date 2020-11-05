#ifndef TEAMSTATECARETAKER_H
#define TEAMSTATECARETAKER_H

#include "Memento.h"
//This is the caretaker participant in the memnto design pattern 
class TeamStateCaretaker
{
private:
    Memento* backupTeam; // the backup of the teams 
public:
    TeamStateCaretaker(Memento* backupTeam);//constructor
    ~TeamStateCaretaker();//destructor

    Memento* getBackupCar();// return the saved cars 
    void setBackupCar(Memento* backupTeam);//reinstate the team after a race (fix the cars or do a pitstop )
};

#endif // TEAMSTATECARETAKER_H