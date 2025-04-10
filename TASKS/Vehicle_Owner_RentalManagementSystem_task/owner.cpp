#include "owner.h"
#include "cars.h"
#include <iostream>

Owner::Owner()
{
    std::cout<<"Owner Constructor Called"<<std::endl;
    this->m_car =new Cars;
}

Owner::~Owner()
{
    std::cout<<"Owner Destructor Called"<<std::endl;
}

void Owner::assignDriver(Drivers *d)
{
    std::cout<<"Assigndriver function called"<<std::endl;
    this->m_car->setDriver(d);
}
