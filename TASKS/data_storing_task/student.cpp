#include "student.h"

Student::Student()
{
    cout<<"Student Management Constructor Called"<<endl;
}

Student::~Student()
{
    cout<<"Student Management Destructor Called"<<endl;
}
Student::Student(string name,int age,int usn,string number)
{
    m_name = name;
    m_age = age;
    m_USN = usn;
    m_mobileNumber = number;

}
string Student::getname()
{
    return m_name;
}

int Student::getage()
{
    return m_age;
}

int Student::getusn()
{
    return m_USN;
}

string Student::getnumber()
{
    return m_mobileNumber;
}
