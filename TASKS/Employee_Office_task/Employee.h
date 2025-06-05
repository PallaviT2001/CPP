#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
#include "BaseObject.h"

class Office;
class Employee : public BaseObject
{
public:
    Employee(const std::string name, BaseObject *office);
    Employee();
    ~Employee();
};

#endif
