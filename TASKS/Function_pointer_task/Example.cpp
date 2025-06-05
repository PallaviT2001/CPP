#include "Example.h"
#include <iostream>
using namespace std;

void Greeting()
{
    cout <<"Good morning from Function pointer" << endl;
}

Example::Example()
{
    cout << "Example class constructor called" << endl;
    ptr =Greeting;
}

Example::~Example()
{
    cout << "Example class destructor called" << endl;
}

