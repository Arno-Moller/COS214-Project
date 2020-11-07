#ifndef CHAMPIONSHIP_H
#define CHAMPIONSHIP_H

#include <iostream>
using namespace std;

class Championship
{
protected:
    double** arr;
    int numDrivers;
    int numLaps;
public:
    Championship(double** array , int drivers , int laps);///constructor 
    ~Championship();///destructor

    virtual void calculate() = 0;
    virtual void swap(double **xp, double **yp)=0;
    
    struct Results
    {
        int team ; 
        int driver;
        double time;
        double TeamTime;
    };
};


#endif // CHAMPIONSHIP_H