#include "Race.h"
#include "Weather.h"
#include "Sunny.h"
#include "Rainy.h"
#include "Cloudy.h"

#include "Race.cpp"
#include "Weather.cpp"
#include "Sunny.cpp"
#include "Rainy.cpp"
#include "Cloudy.cpp"

int main()
{
    
    Race* race = new Race();

    for (int i = 0; i < 10; i++) 
    {
        string currentTLcolour = race->getWeather();
        cout << "Traffic light is currently: " << currentTLcolour << endl;
        race->change();
    }
    delete race;
    return 0; 
}
