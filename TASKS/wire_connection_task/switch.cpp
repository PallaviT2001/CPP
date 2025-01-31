#include "switch.h"
#include "wire.h"
#include "AC.h"// Ensure this exists for Wire class

Switch::Switch()
{

}

void Switch::printswitch()
{
    cout<<switchnumber<<" "<<length<<" "<<breadth<<" "<<brand<<" "<<color<<endl;
}

Switch::Switch(int switchnumber1,int length1,int breadth1, string brand1,string color1,wire* wire)
{
    switchnumber=switchnumber1;
    length=length1;
    breadth=breadth1;
    brand=brand1;
    color=color1;
    m_wire = wire;

}

void Switch::displayswitch()
{
    if(m_wire)
    {
        m_wire->printwire();
        printswitch();
    }
}

