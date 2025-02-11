#include "animal.h"

Animal::Animal()
{
    cout<<"animal class default constructor called"<<endl;
}

Animal::~Animal()
{
    cout<<"animal class destructor called"<<endl;
}

Animal::Animal(int age,string colour,float height)
{
    cout<<"animal class parameterized constructor called"<<endl;
    m_age=age;
    m_colour=colour;
    m_height=height;
}
