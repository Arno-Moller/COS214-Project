#ifndef CHASSIE_H
#define CHASSIE_H

#include <iostream>
#include "RaceCar.h"

using namespace std;
<<<<<<< HEAD

class Chassie : public RaceCar
{
    public:
        Chassie();
        ~Chassie();
        void operation();
=======
//leaf participant of the Composite Design Pattern 
class Chassie : public RaceCar
{
    public:
        Chassie();//constructor 
        ~Chassie();//destructor 
        void degrade();//degrade method 
>>>>>>> theo-branch

};

#endif