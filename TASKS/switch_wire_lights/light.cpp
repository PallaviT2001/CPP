#include "light.h"

Light::Light()
{
    cout<<"light constructor called"<<endl;
}

Light::~Light()
{
    cout<<"light destructor called"<<endl;
}

Light::Light(const Light &light)
{
    cout<<"light copy constructor called"<<endl;
}

void Light::operator=(Light light)
{
    cout<<"light assignment operator called"<<endl;
}

void Light::lighton()
{
    cout<<"light on"<<endl;
}

Light::Light(string brand, string color)
{
    cout<<"light parameter constructor"<<endl;
    m_brand=brand;
    m_color=color;
}

void Light::setwire(Wire *wire)
{
    m_wire = wire;
}
