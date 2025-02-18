#include "Car.h"
#include <iostream>
using namespace std;
#include <string>

Car::Car()
{
    cout<<"car constructor called"<<endl;
}

Car::~Car()
{
    cout<<"car destructor called"<<endl;
}

void Car::insertKey()
{
    key.insert();
    cout << "Key inserted into ignition"<<endl;
}

void Car::startEngine()
{
    engine.start(key);
    if (engine.isRunning())
    {
        cout<<"Engine started"<<endl;
    }
    else
    {
        cout<<"Insert the key first"<<endl;
    }
}

void Car::pressAccelerator()
{
    accelerator.press(engine);
}

void Car::pressBrake()
{
    brake.press();
}
