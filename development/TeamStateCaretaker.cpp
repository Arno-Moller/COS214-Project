#include "TeamStateCaretaker.h"

TeamStateCaretaker::TeamStateCaretaker(Memento* backupCar) 
{
    this->backupTeam = backupTeam;
}

TeamStateCaretaker::~TeamStateCaretaker() 
{
    delete backupTeam;
}

Memento* TeamStateCaretaker::getBackupCar() 
{
    return backupTeam;
}

void TeamStateCaretaker::setBackupCar(Memento* backupTeam) 
{
    this->backupTeam = backupTeam;
}
