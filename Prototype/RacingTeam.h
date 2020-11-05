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

    Team* clone();//the clone method for the team 
    int getTeamPoints();
    void setTeamPoints();
    string getTeamName();
    void setTeamName(string name);

};

#endif // RACINGTEAM_H