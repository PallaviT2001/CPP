#include "vehicle.h"
#include <iostream>
using namespace std;

vehicle::vehicle()
{
    cout<<"default constructor called"<<endl;
}

vehicle::~vehicle()
{
    cout<<"vehicle class destructor called"<<endl;
}

void vehicle::fuelfun(string fuel)
{
    cout<<"base class function called"<<endl;
}
