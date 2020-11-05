#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include "RaceCar.h"

using namespace std;
<<<<<<< HEAD

class Engine : public RaceCar
{
    public:
        Engine();
        ~Engine();
        void operation();
=======
// leaf participant of the Composite design Pattern 
class Engine : public RaceCar
{
    public:
        Engine();//constructor 
        ~Engine();//destructor
        void degrade();//degrade method 
>>>>>>> theo-branch

};

#endif