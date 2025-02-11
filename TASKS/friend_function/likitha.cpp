#include "likitha.h"
#include "person.h"
#include <iostream>

Likitha::Likitha()
{
    cout<<"likitha class default constructor called"<<endl;
}

Likitha::~Likitha()
{
    cout<<"likitha class destructor called"<<endl;
}

void Likitha::display(Person &P)
{
    cout<<P.m_age<<" "<<P.m_name<<" "<<P.m_cno<<endl;
}



