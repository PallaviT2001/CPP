#include "base.h"
#include <iostream>
using namespace std;

base::base()
{
    cout<<"default constructor called"<<endl;
}

base::~base()
{
    cout<<"base class destructor called"<<endl;
}

base::base(int a)
{
    this->m_a=a;
    cout<<"Parameter constructor called"<<endl;
}

int base::getnum()
{
    return m_a;
}

void base::setnum(int b)
{
    this->m_a = b;
}
