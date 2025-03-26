#include "wire.h"

wire::wire()
{
    cout<<"wire constructor called"<<endl;
}
wire::~wire()
{
    cout<<"Wire destructor Called"<<endl;
}

wire::wire(string brand, float price,light *light)
{
    cout<<"Wire Parameterized Constructor Called"<<endl;
    m_brand = brand;
    m_price = price;
    m_light = light;
}

void wire::wireon()
{
    cout<<"Wire on"<<endl;
    m_light->lighton();
}
