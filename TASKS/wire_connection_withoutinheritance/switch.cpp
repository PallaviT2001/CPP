#include "switch.h"

Switch::Switch()
{
    cout<<"Switch Default Construtor Called"<<endl;
}

Switch::~Switch()
{
    cout<<"Switch Destrutor Called"<<endl;
}

Switch::Switch(string colour, string state, string brand, string name, int price)
{
    cout<<"Switch Parameterized Construtor Called"<<endl;
}

void Switch::initializewire(Polycab *wire)
{
    m_pwire = wire;
    m_fwire = 0;
    m_hwire = 0;
    //cout<<"address of wire used in switch "<<&wire<<endl;
}

void Switch::initializewire(Finolex *wire)
{
    m_fwire = wire;
    m_pwire = 0;
    m_hwire = 0;
    //cout<<"address of wire used in switch "<<&wire<<endl;
}

void Switch::initializewire(Havels *wire)
{
    m_hwire = wire;
    m_pwire = 0;
    m_fwire = 0;
    //cout<<"address of wire used in switch "<<&wire<<endl;
}

void Switch::switchOn()
{
    cout<<"Switch Turned On"<<endl;
    if(m_pwire)
    {
        m_pwire->wireOn();
    }
    if(m_fwire)
    {
        m_fwire->wireOn();
    }
    if(m_hwire)
    {
        m_hwire->wireOn();
    }
}
