#include "c.h"
#include <iostream>
using namespace std;

C::C()
{
    cout<<"c constructor"<<endl;
}

C::~C()
{
    cout<<"c destructor"<<endl;
}

void C::fun()
{
    cout<<"C class function called"<<endl;
}

