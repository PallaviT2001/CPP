#include "polycab.h"
#include <iostream>
using namespace std;


Polycab::Polycab()
{
    cout<<"polycab constructor called"<<endl;
}

Polycab::~Polycab()
{
    cout<<"polycab destructor called"<<endl;
    delete b;
}
