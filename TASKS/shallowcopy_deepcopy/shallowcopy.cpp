#include "shallowcopy.h"
#include <iostream>
using namespace std;

Shallowcopy::Shallowcopy()
{
    cout<<"shallowcopy class default constructor called"<<endl;
}

Shallowcopy::~Shallowcopy()
{
    cout<<"shallow copy class destructor called"<<endl;
}

Shallowcopy::Shallowcopy(int val)
{
    data=new int(val);
}

Shallowcopy::Shallowcopy(const Shallowcopy &obj)
{
    data=obj.data;
}

void Shallowcopy::show()

{
    cout<<"value is "<<*data<<endl;
    delete data;
}

void Shallowcopy::display()
{
    cout<<"value is"<<*data<<endl;
}

