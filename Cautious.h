#ifndef CAUTIOUS_H
#define CAUTIOUS_H

#include "Strategy.h"

class Cautious: public Strategy
{
public:
    Cautious();
    ~Cautious();

    void execute();
};

#endif // CAUTIOUS_H