#include "faculty.h"

Faculty::Faculty()
{
    cout<<"faculty parameterized constructor called"<<endl;
}

Faculty::~Faculty()
{
    cout<<"faculty destructor called"<<endl;
}

Faculty::Faculty(int id, string name, int age) : Personaldetails(id, name, age)
{
    cout<<"faculty parameterized constructor called"<<endl;
}

int Faculty::getId() const
{
    return m_id;
}

string Faculty::getName() const
{
    return m_name;
}

int Faculty::getAge() const
{
    return m_age;
}

void Faculty::setDetails(string name, int age)
{
    m_name = name;
    m_age = age;
}

