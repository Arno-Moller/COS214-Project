#ifndef CAUTIOUS_H
#define CAUTIOUS_H

#include "Strategy.h"

using namespace std;

class Cautious: public Strategy
{
public:
    Cautious();
    ~Cautious();

    string execute();
};

#endif // CAUTIOUS_H