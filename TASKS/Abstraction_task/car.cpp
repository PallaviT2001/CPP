#include "car.h"
#include "engine.h"
#include "key.h"
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
}

void Car::stopcar()
{
    key1.keyremove();
    cout<<"car stopped"<<endl;
    eng1.stopengine();

}
