#include "shallowcopy.h"
#include <iostream>
using namespace std;

Shallowcopy::Shallowcopy()
{
    cout<<"shallowcopy class default constructor called"<<endl;
}

Shallowcopy::~Shallowcopy()
{
    delete data;
}

Shallowcopy::Shallowcopy(int val)
{
    data=new int(val);
}

Shallowcopy::Shallowcopy(const Shallowcopy&obj)
{
    data=obj.data;
}

void Shallowcopy::show()
{
    cout<<"value is "<<*data<<endl;
}


