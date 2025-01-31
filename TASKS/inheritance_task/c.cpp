#include "c.h"
#include <iostream>
using namespace std;

c::c()
{
    cout<<"c constructor called"<<endl;
}

c::~c()
{
    cout<<"c destructor called"<<endl;
}

void c::display()
{
    cout<<"c class display function called"<<endl;
}
void c::callc()
{
    cout<<"c class callc function called"<<endl;
}
