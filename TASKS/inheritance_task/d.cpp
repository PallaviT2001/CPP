#include "d.h"
#include <iostream>
using namespace std;

d::d()
{
    cout<<"d constructor called"<<endl;
}

d::~d()
{
    cout<<"d destructor called"<<endl;
}

void d::display()
{
    cout<<"d class display function called"<<endl;
}
void d::calld()
{
    cout<<"d class calld function called"<<endl;
}
