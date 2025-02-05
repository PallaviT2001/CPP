#include "bike.h"
#include "vehicle.h"
#include <iostream>
using namespace std;

Bike::Bike()
{
    cout<<"default constructor called"<<endl;
}

Bike::~Bike()
{
    cout<<"Bike class destructor called"<<endl;
}

void Bike::fuelfun(string fuel)
{
    cout<<"derived class fuel function called"<<endl;
    cout<<"fuel name="<<fuel<<endl;

}




