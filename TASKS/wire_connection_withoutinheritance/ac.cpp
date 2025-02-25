#include "ac.h"
#include "polycab.h"
#include"finolex.h"
#include"havels.h"
AC::AC()
{
    cout<<"Default Constructor of AC called"<<endl;
}

AC::~AC()
{
    cout << "Destructor of AC called"<<endl;
}

AC::AC(string brand,string colour, float price)
{
    cout<<"Parametrized Constructor of AC called"<<endl;

    m_brand = brand;
    m_colour = colour;
    m_price = price;
    //m_wire = NULL;
}

void AC::initializewiretoac(Polycab *wire)
{
    m_pwire=wire;
    m_fwire=0;
    m_hwire=0;
    m_pwire->setac(this);
}

void AC::initializewiretoac(Finolex *wire)
{
    m_fwire=wire;
    m_pwire=0;
    m_hwire=0;
    m_fwire->setac(this);
}

void AC::initializewiretoac(Havels *wire)
{
    m_hwire=wire;
    m_pwire=0;
    m_fwire=0;
    m_hwire->setac(this);
}

void AC::acOn()
{
    cout << "AC is turned ON.\n";
}







