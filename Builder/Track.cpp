#include "Track.h"

Track::Track()  {}

Track::Track(string n)  
{
    trackName = n;
    trackDistance = 0;
    trackRisk = 0;
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

void Track::addSection(string n, int r, int d)
{
    TrackSection* tempSection = new TrackSection(n, r, d);
    section.push_back(*tempSection);

    trackRisk += r;
    trackDistance += d;
}

void Track::showTrack()
{
    list <TrackSection> :: iterator it;
    int sectionCount = 1;

    cout << "This is the " << trackName << " track" << endl;
    cout << endl;
    cout << "Track risk is: " << trackRisk << endl;
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