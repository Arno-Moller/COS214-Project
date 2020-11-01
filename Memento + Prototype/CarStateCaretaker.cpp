#include "CarStateCaretaker.h"

CarStateCaretaker::CarStateCaretaker(Memento* backupCar) 
{
    this->backupCar = backupCar;
}

CarStateCaretaker::~CarStateCaretaker() 
{
    delete backupCar;
}

Memento* CarStateCaretaker::getBackupCar() 
{
    return backupCar;
}

void CarStateCaretaker::setBackupCar(Memento* backupCar) 
{
    this->backupCar = backupCar;
}
