#include "cars.h"
#include <iostream>

Cars::Cars():m_brand("suzuki")
{
    std::cout<<"Car Constructor Called"<<std::endl;
}

Cars::~Cars()
{
    std::cout<<"Car Destructor Called"<<std::endl;
}

void Cars::setDriver(Drivers *d)
{
    std::cout<<"Set driver function called"<<std::endl;
    this->m_driver=d;
    std::cout<<"Driver Name: "<<this->m_driver->getName()<<std::endl;
    std::cout<<"Car Brand: "<<getBrand()<<std::endl;
}

std::string Cars::getBrand()
{
    return m_brand;
}

void Cars::setBrand(std::string newBrand)
{
    m_brand = newBrand;
}
