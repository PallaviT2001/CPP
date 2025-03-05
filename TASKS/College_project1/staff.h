#ifndef STAFF_H
#define STAFF_H
#include "personaldetails.h"
#include <vector>

#include <iostream>
using namespace std;

class Staff:public PersonalDetails
{
private:
    float m_salary;
    int m_contactNumber;
    int m_experience;
public:
    Staff();
    Staff(int id, string name,int age,float salary,int number,int experience);
    ~Staff();
    int getStaffId();
    string getStaffName();
    int getStaffAge();
    float getStaffSalary();
    int getStaffContactNumber();
    int getStaffExperience();

    void setStaffId(int Id);
    void setStaffName(string name);
    void setStaffAge(int age);
    void setStaffSalary(float salary);
    void setStaffContactNumber(int number);
    void setStaffExperience( int experience);





};

#endif // STAFF_H

