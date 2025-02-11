#include "likitha.h"
#include <iostream>

Likitha::Likitha()
{
    cout<<"likitha class default constructor called"<<endl;
}

Likitha::~Likitha()
{
    cout<<"likitha class destructor called"<<endl;
}

void Likitha::display()
{
    /*p->m_age =25;
    p->m_name="pallavi";
    p->m_cno="123654";*/
    cout<<p->m_age<<" "<<p->m_name<<" "<<p->m_cno<<endl;

}



