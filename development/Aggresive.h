#ifndef AGGRESIVE_H
#define AGGRESIVE_H

#include "Strategy.h"

class Aggresive: public Strategy
{
public:
    Aggresive();
    ~Aggresive();

    void execute();
};

#endif // AGGRESIVE_H