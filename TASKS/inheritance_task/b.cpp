#include <iostream>
using namespace std;
#include "b.h"

b::b()
{
    cout<<"b constructor called"<<endl;
}

b::~b()
{
    cout<<"b destructor called"<<endl;
}

void b::display()
{
    cout<<"b class display function called"<<endl;
}

void b::callb()
{
    cout<<"b class callb function called"<<endl;
}
