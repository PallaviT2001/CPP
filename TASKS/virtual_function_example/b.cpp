#include "b.h"
#include <iostream>
using namespace std;


B::B()
{
    cout<<"b constructor"<<endl;
}

B::~B()
{
    cout<<"b destructor"<<endl;
}

void B::fun()
{
    cout<<"b class function called"<<endl;
}
