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
    m_a=a;
    cout<<"Parameter constructor called"<<endl;
}

int base::getnum()
{
    return m_a;
}

void base::setnum(int b)
{
    m_a = b;
}

base::base(string name)
{
    m_name=name;
    cout<<"parameter constructor called"<<endl;
}

string base::getname()
{
    return m_name;
}

void base::setname(string name)
{
    m_name=name;
}
