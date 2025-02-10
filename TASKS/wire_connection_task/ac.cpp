#include "ac.h"


AC::AC(string brand,string colour, float price,Wire* wire)
{
    cout<<"Parametrized Constructor of AC called"<<endl;

    m_brand = brand;
    m_colour = colour;
    m_price = price;
    m_wire = wire;
    m_wire->setAC(this);


}
AC::AC()
{
    cout<<"Default Constructor of AC called"<<endl;

}

void AC::AcOn()
{
    cout << "AC is turned ON.\n";
}

void AC::AcOff()
{
    cout << "AC is turned OFF.\n";
}

AC::~AC()
{
    cout << "Destructor of AC called"<<endl;
}
