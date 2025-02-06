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

void Car::startcar()
{
    cout<<"car startred"<<endl;
    eng1.startengine();
}

void Car::stopcar()
{
    cout<<"car stopped"<<endl;
    eng1.stopengine();

}
