#include "switch.h"


Switch::Switch(string colour,string state,string brand,string name,int price,Wire* wire)
{
    cout<<"Parametrized Constructor of Switch called"<<endl;

    m_colour = colour;
    m_state = state;
    m_brand = brand;
    m_name = name;
    m_price = price;
    m_wire = wire;
}

Switch::Switch()
{
    cout<<"Default Constructor of Switch called"<<endl;

}

Switch::~Switch()
{
    cout<<"Destructor of Switch called"<<endl;
}

void Switch::SwitchOn()
{

    cout << "Switch is turned ON.\n";
    m_wire->powerOnAc();

}

void Switch::SwitchOff()
{

    cout << "Switch is turned OFF.\n";
    m_wire->powerOffAc();

}
