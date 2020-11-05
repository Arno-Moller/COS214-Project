#ifndef PITSTOP_H
#define PITSTOP_H

class PitStop
{
private:
    /* data */
public:
    PitStop(){};
    ~PitStop(){};

    virtual void update() = 0;
};


#endif // PITSTOP_H