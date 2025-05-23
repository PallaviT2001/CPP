#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
using namespace std;
#include <vector>
class Office;

class Employee
{
public:
    Employee(const std::string& name, Office* office);
    Employee(const std::string& name, Employee* emp);
    ~Employee();

    void addChild(Employee* child);
    void print();
    string GetName();
private:
    string name;
    Office* officePtr;
    Employee* empPtr;
    vector<Employee*> children;
};

#endif
