#include "ac.h"

AC::AC()
{
    cout<<"Default Constructor of AC called"<<endl;

}

AC::~AC()
{
    cout << "Destructor of AC called"<<endl;
}

void AC::acOn()
{
    cout << "AC is turned ON.\n";
}

AC::AC(string brand,string colour, float price,Wire* wire)
{
    cout<<"Parametrized Constructor of AC called"<<endl;

    m_brand = brand;
    m_colour = colour;
    m_price = price;
    m_wire = NULL;
}

void AC::initializewiretoac(Wire *wire)
{
    m_wire=wire;
    m_wire->setac(this);
}


