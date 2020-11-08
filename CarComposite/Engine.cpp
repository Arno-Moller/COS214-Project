#include "Engine.h"

Engine::Engine(): RaceCar()
{
	// cout << "Engine" << endl;
}

Engine::~Engine()
{

}

void Engine::degrade()
{

}

RaceCar* Engine::clone()
{
	return new Engine();
}
