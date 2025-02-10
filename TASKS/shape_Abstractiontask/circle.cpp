#include "circle.h"

Circle::Circle()
{
    cout<<"circle class default constructor called"<<endl;
}

Circle::~Circle()
{
    cout<<"circle class destructor called"<<endl;
}

Circle::Circle(int radious)
{
    m_radious=radious;
}

void Circle::area()
{
    cout<<"area of the circle is"<<(3.14*m_radious*m_radious);
}

void Circle::display()
{
    float areaofcircle;
    areaofcircle=(3.14*m_radious*m_radious);
    cout<<"areaofcircle "<< areaofcircle<<endl;
}
