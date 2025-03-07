#include "car.h"
#include "engine.h"
#include <iostream>
using namespace std;

Car::Car()
{
    cout<<"Car constructor called"<<endl;
}

Car::~Car()
{
    cout<<"car class destructor called"<<endl;
}

void Car::startcar(Engine *eng)
{
    cout<<"car startred"<<endl;
    this->eng = eng;
    eng->startengine();
}

void Car::stopcar()
{
    cout<<"car stopped"<<endl;
}
