#include "break.h"
#include "car.h"
#include "engine.h"
#include <iostream>
using namespace std;

Break::Break()
{
    cout<<"break class default constructor called"<<endl;
}

Break::~Break()
{
    cout<<"break class destructor called"<<endl;
}

void Break::applybreak(Car *car)
{
    cout<<"break applied"<<endl;
    this->car = car;
}
