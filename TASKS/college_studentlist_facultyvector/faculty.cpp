#include "faculty.h"
#include "personaldetails.h"

Faculty::Faculty()
{
    cout<<"faculty constructor called"<<endl;
}

Faculty::~Faculty()
{
    cout<<"faculty destructor called"<<endl;
}

Faculty::Faculty(int id, string name, int age)
{
    m_id= id;
    m_name = name;
    m_age = age;
    cout<<"faculty parameterized constructor called"<<endl;
}

void Faculty::display()
{
    cout<<"display function called"<<endl;
}

int Faculty:: getId()
{
    return m_id;
}

string Faculty::getname()
{
    return m_name;
}

int Faculty::getage()
{
    return m_age;
}

void Faculty::setDetails(string name, int age)
{
    m_name = name; m_age = age;
}
