#include "student.h"

Student::Student()
{
    cout<<"Default Constructor of Student Called"<<endl;
}
Student::Student(int id,string name,int age,float fee)
{
    cout<<"Parameterized Constructor of Student Called"<<endl;

    m_id = id;
    m_name= name;
    m_age = age;
    m_fee = fee;
}
Student::~Student()
{
    cout<<"Destructor of Student Called"<<endl;
}

int Student::getStudentId()
{
    return m_id;
}
string Student::getStudentName()
{
    return m_name;
}
int Student::getStudentAge()
{
    return m_age;
}

float Student::getStudentFee()
{
    return m_fee;
}

void Student::setStudentName(string name)
{
    m_name = name;
}

void Student::setStudentAge(int age)
{
    m_age = age;
}
void Student::setStudentFee(float fee)
{
    m_fee= fee;
}


