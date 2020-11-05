#include <list>
#include <iterator>

#include "TestSimulate.h"

TestSimulate::TestSimulate()
{
    BuildTrackCommand* tmp = new BuildTrackCommand();
    tmp->execute();
    track = tmp->getTrack()->getTrack();
}

void TestSimulate::execute()
{
    list <TrackSection> :: iterator it;
    int sectionCount = 1;

    for(it = track.begin(); it != track.end(); ++it)
    {
        cout << "Track Section " << sectionCount << ":" 
                << "\n\tSection type: " << it->getName() 
                << "\n\tRisk of trackSection: " << it->getRiskValue()
                << "\n\tDistance of trackSection: " << it->getDistance() 
                << "\n" << endl;
        sectionCount++;
    }
}