#include "student.h"
#include <iostream>
using namespace std;

Student::Student()
{
    cout<<"student constructor called"<<endl;
}

Student::~Student()
{
    cout<<"student destructor called"<<endl;
}

Student::Student(int id,string name,int age)
{
    m_id=id;
    m_name=name;
    m_age=age;
    cout<<m_id<<" "<<m_name<<" "<<m_age<<endl;
}

int Student::getid() const
{
    return m_id;
}

string Student::getname() const
{
    return m_name;
}

int Student::getage() const
{
    return m_age;
}


