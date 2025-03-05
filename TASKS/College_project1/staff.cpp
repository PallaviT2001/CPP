#include "staff.h"

Staff::Staff()
{
    cout<<"Default Constructor of Staff Called"<<endl;
}

Staff::Staff(int id, string name, int age, float salary, int number, int experience)
{
    m_id = id;
    m_name = name;
    m_age = age;
    m_salary = salary;
    m_contactNumber = number;
    m_experience = experience;
}


Staff::~Staff()
{
    cout<<"Destructor of Staff Called"<<endl;

}

int Staff::getStaffId()
{
    return m_id;
}
string Staff::getStaffName()
{
    return m_name;
}
int Staff::getStaffAge()
{
    return m_age;
}
float Staff::getStaffSalary()
{
    return m_salary;
}

int Staff::getStaffContactNumber()
{
    return m_contactNumber;
}
int Staff::getStaffExperience()
{
    return m_experience;
}
void Staff::setStaffId(int Id)
{
    m_id = Id;
}
void Staff:: setStaffName(string name)
{
    m_name= name;
}


void Staff::setStaffAge(int age)
{
    m_age = age;
}

void Staff::setStaffSalary(float salary)
{
    m_salary = salary;
}

void Staff::setStaffContactNumber(int number)
{
    m_contactNumber = number;
}

void Staff::setStaffExperience(int experience)
{
    m_experience = experience;
}



