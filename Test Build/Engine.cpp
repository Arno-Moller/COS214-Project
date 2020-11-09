#include "Engine.h"

Engine::Engine(): RaceCar()
{

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
