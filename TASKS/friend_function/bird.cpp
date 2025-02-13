#include "bird.h"
#include <iostream>
using namespace std;

Bird::Bird()
{
    cout<<"Bird class default constructor called"<<endl;
}

Bird::~Bird()
{
    cout<<"Bird class destructor called"<<endl;
}

Bird::Bird(int age,string name,float height)
{
    cout<<"Bird class parameterized constructor called"<<endl;
    m_age=age;
    m_name=name;
    m_height=height;
    cout<<m_age<<" "<<m_name<<" "<<m_height<<endl;
}
