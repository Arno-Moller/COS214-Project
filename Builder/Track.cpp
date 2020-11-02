#include "Track.h"

Track::Track()  {}

Track::Track(string n)  
{
    trackName = n;
    trackDistance = 0;
    trackRisk = 0;
    numSections = 0;
}

string Track::getTrackName()
{
    return trackName;
}

int Track::getTrackDistance()
{
    return trackDistance;
}

int Track::getTrackRisk()
{
    return trackRisk;
}

void Track::addSection(TrackSection* tempSection)
{
    section.push_back(*tempSection);

    trackRisk += tempSection->getRiskValue();
    trackDistance += tempSection->getDistance();

    numSections++;
}

void Track::showTrack()
{
    list <TrackSection> :: iterator it;
    int sectionCount = 1;

    cout << "This is the " << trackName << " track" << endl;
    cout << endl;
    cout << "Track risk average of of 100 is: " << trackRisk/numSections << endl;
    cout << "Track distance is: " << trackDistance << endl;
    cout << endl;
    cout << "Track Sections: " << endl;

    for(it = section.begin(); it != section.end(); ++it)
    {
        cout << "Section " << sectionCount << ":" 
                << "\n\tSection type: " << it->getName() 
                << "\n\tRisk of section: " << it->getRiskValue()
                << "\n\tDistance of section: " << it->getDistance() 
                << "\n" << endl;
        sectionCount++;
    }

    cout << '\n';
}