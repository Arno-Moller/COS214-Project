#ifndef RACINGTEAM_H
#define RACINGTEAM_H

#include "Team.h"
//??????
class RacingTeam: public Team
{
private:
    
public:
    RacingTeam();//constructor
    RacingTeam(RacingTeam&);//constructor 
    
    ~RacingTeam();//destructor 

    Team* clone();//the clone method for the team 
};

#endif // RACINGTEAM_H