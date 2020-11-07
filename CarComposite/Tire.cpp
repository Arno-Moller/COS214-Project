#include "Tire.h"

Tire::Tire(): RaceCar()
{
	cout << "Tire" << endl;
}

Tire::Tire(TireState *tState, TireCompound* type)
{
	this->setState(tState);
	setType(type);
    tireGrip = getGrip();
}

Tire::Tire(string type)
{
	if (type == "soft" || type == "s")
    {
        this->compound = new SoftCompound();
    }
    else if (type == "medium" || type == "m")
    {
        this->compound = new MediumCompound();
    }
    else
    {
        this->compound = new HardCompound();
    }
    
    PitStop* pit = new ChangeTires(this);
    addPitcrew(pit);

    srand(rand()*rand());
	int chanceStrategyOdds = rand() % 100;

    if (chanceStrategyOdds >= 0)
    {
        int nextStrategy = rand() % 3;
        switch (nextStrategy)
        {
        case 0:
            setStrategy(new Sensible());
            break;

        case 1:
            setStrategy(new Cautious());
            break;
            
        case 2:
            setStrategy(new Aggresive());
            break;
        
        default:
            break;
        }
    }
    this->setState(new GoodCondition(this));
    
    tireGrip = getGrip();
}

Tire::~Tire()
{
    delete state;
    delete compound;
}

TireState* Tire::getState()
{
    return this->state;
}

void Tire::setState(TireState *tState)
{   
  
    this->state = tState;

}

void Tire::setType(string type) 
{   
    if (compound != NULL)
    {
        delete compound;
        hasPitted = true;
    }
    
    string newCompound = "";

    if (type == "soft" || type == "s")
    {
        this->compound = new SoftCompound();
        newCompound = "Soft Compound";
    }
    else if (type == "medium" || type == "m")
    {
        this->compound = new MediumCompound();
        newCompound = "Medium Compound";
    }
    else
    {
        this->compound = new HardCompound();
        newCompound = "Hard Compound";
    }

    if (currentCompound != "")
    {
        cout << "The tyres have been changed from " << currentCompound << " to " << newCompound << " on car " << getDriverName() << endl;
    }
    
    currentCompound = newCompound;

    setState(new GoodCondition(this));
}

void Tire::setType(TireCompound* type) 
{
    if (compound != NULL)
    {
        delete compound;
    }
    this->compound = type;
    setState(new GoodCondition(this));
}

void Tire::lap() 
{
    degrade();
}

///Function to call each lap that degrades the tires
void Tire::degrade()
{   
    hasPitted = false;
    
    int chanceStrategyOdds = rand() % 100;

    if (chanceStrategyOdds >= 75)
    {
        int nextStrategy = rand() % 3;
        switch (nextStrategy)
        {
        case 0:
            setStrategy(new Sensible());
            break;

        case 1:
            setStrategy(new Cautious());
            break;
            
        case 2:
            setStrategy(new Aggresive());
            break;
        
        default:
            break;
        }
    }

	setWear(getWear() + getRate());
    setGrip(getGrip() - getRate());

    notify();
    getStrategy()->execute();
}

int Tire::getGrip() 
{
    return this->compound->getGrip();
}

void Tire::setGrip(int grip) 
{
    this->compound->setGrip(grip);
    tireGrip = grip;
}

int Tire::getWear() 
{
    return this->compound->getWear();
}

void Tire::setWear(int wear) 
{
    this->compound->setWear(wear);
}

double Tire::getRate() 
{
    return this->compound->getRate();
}

string Tire::getNextTireCompound() 
{
    return getStrategy()->execute();
}
