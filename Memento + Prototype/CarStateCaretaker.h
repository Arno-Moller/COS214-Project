#ifndef CARSTATECARETAKER_H
#define CARSTATECARETAKER_H

#include "Memento.h"

class CarStateCaretaker
{
private:
    Memento* backupCar;
public:
    CarStateCaretaker(Memento* backupCar);
    ~CarStateCaretaker();

    Memento* getBackupCar();
    void setBackupCar(Memento* backupCar);
};

#endif // CARSTATECARETAKER_H