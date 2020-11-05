#ifndef SUSPENSION_H
#define SUSPENSION_H

#include <iostream>
#include "RaceCar.h"

using namespace std;
<<<<<<< HEAD

class Suspension : public RaceCar
{
    public:
        Suspension();
        ~Suspension();
        void operation();
=======
// The leaf participant of the composite Design Pattern 
class Suspension : public RaceCar
{
    public:
        Suspension();//constructor 
        ~Suspension();//destructor
        void degrade();//degrade method 
>>>>>>> theo-branch
};

#endif