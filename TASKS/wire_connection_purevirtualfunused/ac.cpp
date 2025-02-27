#include "ac.h"

AC::AC()
{
    cout<<"AC Default Constructor called"<<endl;
}
AC::AC(string brand, string colour, float price, Wire* wire)
{
    cout<<"AC Parameterized Constructor called"<<endl;

    m_brand = brand;
    m_colour = colour;
    m_price  = price;
    m_wire = NULL;
}

AC::~AC()
{
    cout<<"AC Destructor called"<<endl;
}

void AC::setWiretoac(Wire *wire)
{
    m_wire = wire;
    m_wire->setac(this);

}
void AC::acOn()
{
    cout<<"AC turned on"<<endl;
}
