#ifndef Command_h
#define Command_h

#include <iostream>

using namespace std;

class Command
{
    public:
        virtual void execute() = 0;
};

#endif
