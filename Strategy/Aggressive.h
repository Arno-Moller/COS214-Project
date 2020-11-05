#ifndef AGGRESIVE_H
#define AGGRESIVE_H

#include "Strategy.h"

using namespace std;

class Aggresive: public Strategy
{
public:
    Aggresive();
    ~Aggresive();

    string execute();
};

#endif // AGGRESIVE_H