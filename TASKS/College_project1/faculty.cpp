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

void Faculty::display() const
{
    cout << "Faculty: " << m_name << ", Age: " << m_age << endl;
}
