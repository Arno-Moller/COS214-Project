#ifndef HUB_H
#define HUB_H

#include <iostream>
#include "RaceCar.h"

using namespace std;
<<<<<<< HEAD

class Hub : public RaceCar
{
    public:
        Hub();
        ~Hub();
        void operation();
=======
//leaf participant of the Composite Design pattern 
class Hub : public RaceCar
{
    public:
        Hub();//constructor
        ~Hub();//destructor
        void degrade();//degrade method 
>>>>>>> theo-branch

};

#endif