#include "car.h"
#include "engine.h"
#include "key.h"
#include "accelerator.h"
#include <iostream>
using namespace std;

Car::Car()
{
    cout<<"Car default constructor called"<<endl;
}

Car::~Car()
{
    cout<<"car class destructor called"<<endl;
}

void Car::startcar()
{
    key1.keyinsert();
    cout<<"car startred"<<endl;
    eng1.startengine();
    ac1.speedup();
    br1.applybreak();
}

void Car::stopcar()
{
    cout<<"car stopped"<<endl;
}
