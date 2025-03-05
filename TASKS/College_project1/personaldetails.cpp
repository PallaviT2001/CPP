#include "personaldetails.h"

Personaldetails::Personaldetails()
{
    cout<<"personal details parameterized constructor called"<<endl;
}

Personaldetails::~Personaldetails()
{
    cout<<"personal details destructor called"<<endl;
}

Personaldetails::Personaldetails(int id, string name, int age) : m_id(id), m_name(name), m_age(age)
{
    cout<<"personal details parameterized constructor called"<<endl;
}

int Personaldetails::getId() const
{
    return m_id;
}

string Personaldetails::getName() const
{
    return m_name;
}

int Personaldetails::getAge() const
{
    return m_age;
}

void Personaldetails::setDetails(string name, int age)
{
    m_name = name;
    m_age = age;
}
