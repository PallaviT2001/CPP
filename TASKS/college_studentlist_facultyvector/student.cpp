#include "student.h"
#include "faculty.h"

Student::Student()
{
    cout<<"student constructor called"<<endl;
}

Student::~Student()
{
    cout<<"student destructor called"<<endl;
}

Student::Student(int id, string name, int age)
{
    cout<<"student parameterized constructor called"<<endl;
    m_id = id;
    m_name = name;
    m_age = age;
}

int Student::getId()
{
    return m_id;
}

string Student::getname()
{
    return m_name;
}

int Student::getage()
{
    return m_age;
}
void Student::setDetails(string name, int age)
{
    m_name=name;
    m_age=age;
}
