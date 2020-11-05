#ifndef SENSIBLE_H
#define SENSIBLE_H

#include "Strategy.h"

class Sensible: public Strategy
{
public:
    Sensible();
    ~Sensible();

    void execute();
};


#endif // SENSIBLE_H