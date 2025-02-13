#include "parrot.h"
#include <iostream>
using namespace std;
#include "bird.h"

Parrot::Parrot()
{
    cout<<"parrot class default constructor called"<<endl;
}

Parrot::~Parrot()
{
    cout<<"parrot class destructor called"<<endl;
}

void Parrot::display(Bird &b)
{
    cout<<"Parrot class parameterized constructor called"<<endl;
    cout<<b.m_age<<" "<<b.m_name<<" "<<b.m_height<<endl;
}
