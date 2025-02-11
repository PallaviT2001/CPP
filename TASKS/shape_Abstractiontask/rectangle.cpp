#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle()
{
    cout<<"rectangle class default constructor called"<<endl;
}

Rectangle::~Rectangle()
{
    cout<<"rectangle class destructor called"<<endl;
}

Rectangle::Rectangle(double length, double width)
{
    m_length=length;
    m_width=width;
    cout<<"Parameterized Rectangle constructor called"<<endl;
}

void Rectangle::area()
{
    cout<<"area of the rectangle is"<<(m_length*m_width)<<endl;
}

void Rectangle::display()
{
    cout<<"area of the rectangle displayed"<<endl;
}
