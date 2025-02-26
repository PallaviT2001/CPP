#include "havels.h"
#include <iostream>
using namespace std;

Havels::Havels()
{
    cout<<"havels constructor called"<<endl;
}

Havels::~Havels()
{
    cout<<"havels destructor called"<<endl;
    delete c;
}
