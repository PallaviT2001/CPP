#include "owner.h"
#include "cars.h"
#include <iostream>

Owner::Owner()
{
    std::cout<<"Owner Constructor Called"<<std::endl;
    this->m_car =  new Cars;
    //m_car->setBrand("Bmw");
}

Owner::~Owner()
{
    std::cout<<"Owner Destructor Called"<<std::endl;
}


void Owner::assignDriver(Drivers* d)
{
    std::cout<<"Assigndriver function called"<<std::endl;
    //this->m_driver = d;
    this->m_car->setDriver(d);
}

