#ifndef STUDENT_H
#define STUDENT_H
#include "personaldetails.h"
#include <iostream>
#include <list>

using namespace std;


class Student:public PersonalDetails
{
private:
    float m_fee;


public:
    Student();
    Student(int id, string name,int age,float fee);
    ~Student();

    int getStudentId();
    string getStudentName();
    int getStudentAge();
    float getStudentFee();
    void setStudentName(string name);
    void setStudentAge(int age);
    void setStudentFee(float fee);




};

#endif // STUDENT_H


