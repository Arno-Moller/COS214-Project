#ifndef BADCONDITION_H
#define BADCONDITION_H

#include <iostream>
#include "TireState.h"
<<<<<<< HEAD

using namespace std;

//Concrete State
class BadCondition : public TireState
{
    public:
        BadCondition();
        ~BadCondition();
        virtual void handle(Tire* t);
};

#endif
=======
#include "GoodCondition.h"

using namespace std;

class BadCondition: public TireState
{
    public:
        BadCondition();
        BadCondition(Tire* tires);
        ~BadCondition();
        bool handle();
        void changeTireState();
};

#endif // BADCONDITION_H
>>>>>>> theo-branch
