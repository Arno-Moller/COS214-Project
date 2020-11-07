#ifndef CHAMPIONSHIP_H
#define CHAMPIONSHIP_H

using namespace std;

class Championship
{
private:
    /* data */
public:
    Championship();///constructor 
    ~Championship();///destructor

    virtual void start() = 0;
    virtual void restart() = 0;
    virtual void stop() = 0;
};


#endif // CHAMPIONSHIP_H