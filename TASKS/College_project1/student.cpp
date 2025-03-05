#include "student.h"

Student::Student()
{
    cout<<"student constructor called"<<endl;
}

Student::~Student()
{
    cout<<"student destructor called"<<endl;
}


Student::Student(int id, string name, int age) : Personaldetails(id, name, age)
{
    cout<<"student parameterized constructor called"<<endl;
}

void Student::display() const
{
    cout<<"Student: " << m_name << ", Age: " << m_age << endl;
}
