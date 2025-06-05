#include "Employee.h"
#include "Office.h"

Employee::Employee()
{
    std::cout<<"employee constructor with empty parameter"<<std::endl;
}

Employee::~Employee()
{
    std::cout<<"employee destructor called"<<std::endl;
}

Employee::Employee(const std::string name, BaseObject* baseobject): BaseObject(name)
{
    std::cout<<"employee constructor with parameter"<<std::endl;
    if (baseobject)
    {
        baseobject->addChild(this);
    }
}

