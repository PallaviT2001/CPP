#include "brake.h"
#include "car.h"
#include "engine.h"
#include <iostream>
using namespace std;

Brake::Brake()
{
    cout<<"brake constructor called"<<endl;
}

Brake::~Brake()
{
    cout<<"brake destructor called"<<endl;
}

void Brake::applybrake(Car *car,Engine *eng)
{
    cout<<"brake applied"<<endl;
    this->car = car;
    eng->stopengine(car);
}
