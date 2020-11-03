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

using namespace std;

int main()
{
    
    Race* race = new Race("Europe");

    for (int i = 0; i < 10; i++) 
    {
        string weather = race->getWeather();
        cout << "Weather is currently: " << weather << endl;
        race->change();
    }
    delete race;
    return 0; 
}
