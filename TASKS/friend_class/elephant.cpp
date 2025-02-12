#include "elephant.h"
#include <iostream>
using namespace std;

Elephant::Elephant()
{
    cout<<"animal class default constructor called"<<endl;
}

Elephant::~Elephant()
{
    cout<<"animal class destructor called"<<endl;
}

Elephant::Elephant(int age,string colour,float height)
{
    m_age=age;
    m_colour=colour;
    m_height=height;
}

void Elephant::display()
{
    cout<<m_age<<" "<<m_colour<<" "<<m_height<<endl;
}
