#include "drivers.h"
#include <iostream>

Drivers::Drivers()
{
    std::cout<<"Driver Constructor Called"<<std::endl;
}

Drivers::~Drivers()
{
    std::cout<<"Driver Destructor Called"<<std::endl;
}

std::string Drivers::getName()
{
    return m_name;
}

void Drivers::setName(std::string newName)
{
    m_name = newName;
}
