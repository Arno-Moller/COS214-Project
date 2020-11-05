#ifndef TIRECOMPOUND_H
#define TIRECOMPOUND_H

using namespace std;

class TireCompound
{
protected:
    int grip;
    int wear;
    int rate;

public:
    TireCompound();
    ~TireCompound();

    virtual int getGrip() = 0;
    virtual void setGrip(int grip) = 0;
    virtual int getWear() = 0;
    virtual void setWear(int wear) = 0;
    virtual int getRate() = 0;
    virtual void setRate(int wear) = 0;

};

#endif // TIRECOMPOUND_H