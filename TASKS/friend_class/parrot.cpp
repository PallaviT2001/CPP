#include "parrot.h"

Parrot::Parrot()
{
    cout<<"parrot class default comnstructor called"<<endl;
}

Parrot::~Parrot()
{
    cout<<"parrot class destructor called"<<endl;
}

Parrot::Parrot(int age, string name, float height)
{
    m_age=age;
    m_name=name;
    m_height=height;
}

void Parrot::display()
{
    cout<<m_age<<" "<<m_name<<" "<<m_height<<endl;
}
