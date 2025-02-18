#include "Brake.h"
#include <iostream>
using namespace std;
#include <string>

Brake::Brake()
{
    cout<<"brake constructor called"<<endl;
}

Brake::~Brake()
{
    cout<<"brake destructor called"<<endl;
}

void Brake::press()
{
    cout << "Car has stopped." <<endl;
}
