#include "elephant.h"
#include <iostream>

Elephant::Elephant()
{
    cout<<"animal class default constructor called"<<endl;
}

Elephant::~Elephant()
{
    cout<<"animal class destructor called"<<endl;
}

void Elephant::display(Animal &a)
{
    cout<<a.m_age<<" "<<a.m_colour<<" "<<a.m_height<<endl;
}
