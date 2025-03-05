#include "student.h"

Student::Student() {}

Student::~Student() {}

Student::Student(string name,int age,int usn,string number)
{
    m_name = name;
    m_age = age;
    m_USN = usn;
    m_mobileNumber = number;
}

string Student::getName() const
{
    return m_name;
}

int Student::getAge() const
{
    return m_age;
}

int Student::getUSN() const
{
    return  m_USN;
}

string Student::getMobileNumber() const
{
    return m_mobileNumber;
}
