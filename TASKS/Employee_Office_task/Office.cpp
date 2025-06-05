#include "Office.h"
#include "Employee.h"

Office::Office()
{
    std::cout<<"office empty constructor called"<<std::endl;
}

Office::~Office()
{
    std::cout<<"office destructor called"<<std::endl;
}

Office::Office(const std::string name) : BaseObject(name)
{
    std::cout<<"office constructor called"<<std::endl;
}
