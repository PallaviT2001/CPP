#include "person.h"
#include "likitha.h"

Person::Person()
{
    cout<<"person class default constructor called"<<endl;
}

Person::~Person()
{
    cout<<"person class destructor called"<<endl;
}

Person::Person(int a, string b, string c)
{
    cout<<"person class parameterized constructor called"<<endl;
    m_age=a;
    m_name=b;
    m_cno=c;
}


