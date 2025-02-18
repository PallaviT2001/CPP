#include "Engine.h"
#include "Key.h"
#include <iostream>
using namespace std;

Engine::~Engine()
{
    cout<<"engine destructor called"<<endl;
}

Engine::Engine() : isOn(false)
{
    cout<<"engine constructor called"<<endl;
}

void Engine::start(const Key& key)
{
    if (key.isInserted())
    {
        isOn = true;
    }
}

void Engine::stop()
{
    isOn = false;
}

bool Engine::isRunning() const
{
    return isOn;
}
