#ifndef SENSIBLE_H
#define SENSIBLE_H


#include "Strategy.h"

using namespace std;

class Sensible: public Strategy
{
public:
    Sensible();
    ~Sensible();

    string execute();
};


#endif // SENSIBLE_H