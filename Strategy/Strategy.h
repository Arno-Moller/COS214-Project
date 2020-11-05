#ifndef STRATEGY_H
#define STRATEGY_H

class Strategy
{
public:
    Strategy();
    virtual ~Strategy() = 0;

    virtual void execute() = 0;
};

Strategy::Strategy() 
{
}

#endif // STRATEGY_H