#include "a.h"
#include <iostream>
using namespace std;

A::A()
{
    cout<<"a constructor"<<endl;
}

A::~A()
{
    cout<<"a destructor"<<endl;
}

void A::fun()
{
    cout<<"a class function called"<<endl;
}
