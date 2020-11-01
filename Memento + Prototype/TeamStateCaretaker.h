#ifndef TEAMSTATECARETAKER_H
#define TEAMSTATECARETAKER_H

#include "Memento.h"

class TeamStateCaretaker
{
private:
    Memento* backupTeam;
public:
    TeamStateCaretaker(Memento* backupTeam);
    ~TeamStateCaretaker();

    Memento* getBackupCar();
    void setBackupCar(Memento* backupTeam);
};

#endif // TEAMSTATECARETAKER_H