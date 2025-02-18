#include "engine.h"
#include <iostream>
#include "accelerator.h"
using namespace std;

Engine::Engine()
{
    cout<<"Engine default constructor called"<<endl;
}

Engine::~Engine()
{
    cout<<"engine class destructor called"<<endl;
}

void Engine::startengine(Accelerator *ac)
{
    cout<<"engine started"<<endl;
    this->ac=ac;
    ac->speedup();
}

void Engine::stopengine()
{
    cout<<"engine stopped"<<endl;
}
