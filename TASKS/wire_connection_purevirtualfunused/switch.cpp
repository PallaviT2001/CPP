#include "switch.h"

Switch::Switch()
{
    cout<<"Switch Default Construtor Called"<<endl;
}

Switch::Switch(string colour, string state, string brand, string name, int price, Wire *wire)
{
    cout<<"Switch Parameterized Construtor Called"<<endl;
}


Switch::~Switch()
{
    cout<<"Switch Destrutor Called"<<endl;
}


void Switch::initializewiretoswitch(Wire *wire)
{
    m_wire = wire;
}

void Switch::switchOn()
{
    cout<<"Switch Turned On"<<endl;
    m_wire->wireOn();
}
