#include "switch.h"

Switch::Switch()
{
    cout<<"switch constructor Called"<<endl;
}



Switch::Switch(string brand, float price,wire *wire1,wire *wire2,wire *wire3)
{
    cout<<"Switch Parameterized Constructor Called"<<endl;
    m_brand = brand;
    m_price = price;
    m_wire1= wire1;
    m_wire2= wire2;
    m_wire3= wire3;
}

void Switch::switchon()
{
    cout<<"Switch On"<<endl;
    m_wire1->wireon();
    m_wire2->wireon();
    m_wire3->wireon();
}

