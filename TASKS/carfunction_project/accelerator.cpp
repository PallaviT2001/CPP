#include "Accelerator.h"
using namespace std;
#include <string>
#include <iostream>

Accelerator::Accelerator()
{
    cout<<"Accelerator constructor called"<<endl;
}

Accelerator::~Accelerator()
{
    cout<<"Accelerator destructor called"<<endl;
}

void Accelerator::press(Engine& engine)
{
    if (engine.isRunning())
    {
        cout << "Car is moving" <<endl;
    }
    else
    {
        cout << "Engine is off. Start the engine first!"<<endl;
    }
}
