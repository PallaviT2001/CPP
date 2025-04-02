#include "switch.h"

Switch::Switch()
{
    cout<<"switch constructor called"<<endl;
}

Switch::~Switch()
{
    cout<<"switch destructor called"<<endl;
}

Switch::Switch(Switch &Switch)
{
    cout<<"switch copy constructor called"<<endl;
}

void Switch::operator =(Switch &Switchobj)
{
    cout<<"switch assignment operator called"<<endl;
}

Switch::Switch(string brand, string color)
{
    cout<<"switch parameter constructor"<<endl;
    m_brand=brand;
    m_color=color;

}

void Switch::setwire(Wire *wire)
{
    cout<<"set wire"<<endl;
    m_wire = wire;
}

void Switch::switchon()
{
    cout<<"switch on"<<endl;
    m_wire->wireon();

}


