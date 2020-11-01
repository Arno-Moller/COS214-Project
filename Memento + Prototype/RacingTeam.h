#ifndef RACINGTEAM_H
#define RACINGTEAM_H

#include "Team.h"

class RacingTeam: public Team
{
private:
    
public:
    RacingTeam();
    RacingTeam(RacingTeam&);
    
    ~RacingTeam();

    Team* clone();
};

#endif // RACINGTEAM_H