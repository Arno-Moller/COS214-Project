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
    trackSection.push_back(*tempSection);

    trackRisk += tempSection->getRiskValue();
    trackDistance += tempSection->getDistance();

    numSections++;
}

list<TrackSection> Track::getTrack()
{
    return trackSection;
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

    for(it = trackSection.begin(); it != trackSection.end(); ++it)
    {
        cout << "Track Section " << sectionCount << ":" 
                << "\n\tSection type: " << it->getName() 
                << "\n\tRisk of trackSection: " << it->getRiskValue()
                << "\n\tDistance of trackSection: " << it->getDistance() 
                << "\n" << endl;
        sectionCount++;
    }

    cout << '\n';
}