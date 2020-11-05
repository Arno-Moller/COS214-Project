#ifndef RACINGTEAM_H
#define RACINGTEAM_H

#include "Team.h"
//concrete protorype of the prototype design pattern 
class RacingTeam: public Team
{
private:
    
public:
    RacingTeam();//constructor
    RacingTeam(string tireCompound);
    RacingTeam(RacingTeam&);//constructor 
    
    ~RacingTeam();//destructor 

    RaceCar* getCarOne(); // returns the first race car of the team 
    RaceCar* getCarTwo(); // returns the second race car of the team 
    void setCarOne(RaceCar* car1); // sets the first race car of the team 
    void setCarTwo(RaceCar* car2); // sets the seconds race car of the team

    Team* clone();//the clone method for the team 
    int getTeamPoints();
    void setTeamPoints();
    string getTeamName();
    void setTeamName(string name);

};

#endif // RACINGTEAM_H