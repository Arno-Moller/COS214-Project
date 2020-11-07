#include "TeamStateCaretaker.h"

TeamStateCaretaker::TeamStateCaretaker(Memento* backupCar) 
{
    this->backupTeam = backupTeam;
}

TeamStateCaretaker::~TeamStateCaretaker() 
{
    delete backupTeam;
}

Memento* TeamStateCaretaker::getBackupTeam()
{
    return backupTeam;
}

void TeamStateCaretaker::setBackupTeam(Memento* backupTeam) 
{
    this->backupTeam = backupTeam;
}
