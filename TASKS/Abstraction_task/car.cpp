#include "car.h"
#include "engine.h"
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

void Car::startcar(Engine *eng, Accelerator *ac)
{

    cout<<"car startred"<<endl;
    this->eng = eng;
    eng->startengine(ac);
}


void Car::stopcar(Engine *eng)
{
    cout<<"car stopped"<<endl;


}
