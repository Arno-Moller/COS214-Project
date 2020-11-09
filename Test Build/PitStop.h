#ifndef PITSTOP_H
#define PITSTOP_H
///The observer participant of the observer design pattern 
class PitStop
{
public:
    PitStop(){};/// constructor 
    ~PitStop(){};/// destructor

    virtual void update() = 0; /// abstract interface to update the tires
};

#endif // PITSTOP_H