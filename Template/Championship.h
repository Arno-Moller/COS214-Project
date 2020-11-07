#ifndef CHAMPIONSHIP_H
#define CHAMPIONSHIP_H

#include <iostream>
using namespace std;

struct Results;



class Championship
{
protected:
    double** arr;
    int numDrivers;
    int numLaps;
public:
    Championship(double** array , int drivers , int laps);///constructor 
    virtual ~Championship();///destructor

    virtual void calculate() = 0;
    virtual void swap(double **xp, double **yp) = 0;
    
    
};
#endif // CHAMPIONSHIP_H