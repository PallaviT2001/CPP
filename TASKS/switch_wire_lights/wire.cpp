#include "wire.h"

Wire::Wire()
{
    cout<<"wire constructor called"<<endl;
}

Wire::~Wire()
{
    cout<<"wire destructor called"<<endl;
}

Wire::Wire(Wire &wire)
{
    cout<<"wire copy constructor called"<<endl;
}

void Wire::operator=(Wire &wireobj)
{
    cout<<"wire assignment operator called"<<endl;
}

Wire::Wire(string brand, string color, vector<Light> light)
{
    cout<<"wire parameter constructor"<<endl;
    m_brand=brand;
    m_color=color;
    m_light = light;

}

void Wire::wireon()
{
    cout<<"wire on"<<endl;
    for(auto i :m_light)
    {
        i.lighton();
    }
}
