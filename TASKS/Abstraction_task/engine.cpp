#include "engine.h"
#include <iostream>

using namespace std;

Engine::Engine()
{
    cout<<"Engine constructor called"<<endl;
}

Engine::~Engine()
{
    cout<<"engine destructor called"<<endl;
}

void Engine::startengine()
{
    cout<<"engine started"<<endl;

}
void Engine::stopengine(Car *car)
{
    car->stopcar();
    cout<<"engine off"<<endl;
}
