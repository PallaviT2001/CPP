#include "light.h"

light::light()
{
    cout<<"light constructor called"<<endl;
}

light::~light()
{
    cout<<"light destructor called"<<endl;
}

light::light(string brand, float price)
{
    m_brand=brand;
    m_price=price;
}

void light::lighton()
{
    cout<<"light turned on"<<endl;
}
