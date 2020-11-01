#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include "RaceCar.h"

using namespace std;

class Engine : public RaceCar
{
    public:
        Engine();
        ~Engine();
        void operation();

};

#endif