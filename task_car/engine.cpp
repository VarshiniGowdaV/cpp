#include "engine.h"
#include <iostream>

using namespace std;

Engine::Engine()
{
    cout << "Engine constructor called" << endl;
}

Engine::~Engine()
{
    cout << "Engine destructor called" << endl;
}

void Engine::startEngine()
{
    cout << "Engine started" << endl;
}

void Engine::stopEngine()
{
    cout << "Engine stopped" << endl;
}
