#include "ac.h"
#include "wire.h"

ac::ac(int acnumber1, int length1, int breadth1, string brand1, string color1,wire* wire)
{
    acnumber=acnumber1;
    length=length1;
    breadth=breadth1;
    brand=brand1;
    m_wire = wire;
    color=color1;

}
ac::ac()
{

}
void ac::display()
{
    if(m_wire)
    {
        m_wire->printwire();
        printAC();
    }
}

void ac::printAC()
{
    cout<<acnumber<<" "<<length<<" "<<breadth<<" "<<brand<<" "<<color<<endl;

}
