#ifndef OFFICE_H
#define OFFICE_H
#include <string>
#include <iostream>
#include "BaseObject.h"

class Employee;

class Office : public BaseObject
{
public:
    Office(const std::string name);
    Office();
    ~Office();

};

#endif
