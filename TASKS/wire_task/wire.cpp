#include "wire.h"
#include <iostream>
using namespace std;


Wire::Wire()
{
    cout<<"wire constructor called"<<endl;
}

Wire::~Wire()
{
    cout<<"wire destructor called"<<endl;
    delete ptr;
}
