#include "wire.h"
#include "ac.h"

Wire::Wire(float thickness,float length,string colour,string brand,float price)
{
    cout<<"Parametrized Constructor of wire called"<<endl;
    m_thickness = thickness;
    m_length = length;
    m_colour = colour;
    m_brand = brand;
    m_price = price;
}


Wire::Wire()
{
    cout<<"Default Constructor of Switch called"<<endl;
}


void Wire::display()
{
    cout<<"Wire 1->"<<"Thickness:"<<m_thickness<<"\t"<<"length:"<<m_length<<"\t"<<"Colour:"<<m_colour<<"\t"<<"Brand:"<<m_brand<<"\t"<<"Price:"<<m_price<<endl;

}

void Wire::setAC(AC* ac)
{
    acptr = ac;
    cout << "Wire connected to AC "<<endl;

}

void Wire::powerOnAc()
{
    acptr->AcOn();


}

void Wire::powerOffAc()
{

    acptr->AcOff();

}

Wire::~Wire()
{
    cout<<"Destructor of Wire called"<<endl;
}
