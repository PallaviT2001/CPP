#include "engine.h"
#include <iostream>
using namespace std;
#include <string>

Engine::Engine()
{
    cout<<"engine default constructor called"<<endl;
}

Engine::~Engine()
{
    cout<<"engine class destructor called"<<endl;
}

void Engine::start()
{
    cout<<"engine class start called"<<endl;
}

Engine::Engine(int engineid,string enginename)
{
    cout<<"engine class parameterized constructor called"<<endl;
    this->engineid=engineid;
    this->enginename=enginename;
    cout<<engineid<<" "<<enginename<<endl;
}


