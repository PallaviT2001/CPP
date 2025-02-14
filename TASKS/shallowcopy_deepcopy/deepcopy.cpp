#include "deepcopy.h"
#include <iostream>
using namespace std;

Deepcopy::Deepcopy()
{
    cout<<"Deepcopy class default constructor called"<<endl;
}

Deepcopy::~Deepcopy()
{
    delete data;
    cout<<"Deepcopy class destructor called"<<endl;
}

Deepcopy::Deepcopy(int val)
{
    data=new int(val);
}

Deepcopy::Deepcopy(const Deepcopy&obj)
{
    data=new int(*obj.data);
}

void Deepcopy::show()
{
    cout<<"value is "<<*data<<endl;
}



