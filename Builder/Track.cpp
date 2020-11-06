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

vector<TrackSection> Track::getTrack()
{
    return trackSection;
}

int Track::getSectionCount()
{
    return numSections;
}

void Track::showTrack()
{
    int sectionCount = 1;

    cout << "This is the " << trackName << " track" << endl;
    cout << endl;
    cout << "Track risk average of of 100 is: " << trackRisk/numSections << endl;
    cout << "Track distance is: " << trackDistance << endl;
    cout << endl;
    cout << "Track Sections: " << trackSection.size() << endl;

    for(TrackSection it:trackSection)
    {
        cout << "Track Section " << sectionCount << ":" 
                << "\n\tSection type: " << it.getName() 
                << "\n\tRisk of trackSection: " << it.getRiskValue()
                << "\n\tDistance of trackSection: " << it.getDistance() 
                << "\n" << endl;
        sectionCount++;
        cout << "count" << endl;
    }

    cout << '\n';
}