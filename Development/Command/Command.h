#ifndef Command_h
#define Command_h

#include <iostream>

using namespace std;

class Command
{
    public:
    /**
    *  Function that executes all the commands 
    */
        virtual void execute() = 0;
};

#endif
