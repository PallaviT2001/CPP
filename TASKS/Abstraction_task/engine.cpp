#include "engine.h"
#include <iostream>
using namespace std;

Engine::Engine()
{
    cout<<"Engine default constructor called"<<endl;
}

Engine::~Engine()
{
    cout<<"engine class destructor called"<<endl;
}

void Engine::startengine()
{
    cout<<"engine started"<<endl;
}

void Engine::stopengine()
{
    cout<<"engine stopped"<<endl;
}
