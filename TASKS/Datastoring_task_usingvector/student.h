#ifndef STUDENT_H
#define STUDENT_H
#include <list>
using namespace std;
#include <iostream>

class Student
{
private:
    string m_name;
    int m_age;
    int m_usn;
    string m_contactnumber;
public:
    Student();
    ~Student();
    Student(string name,int age,int usn,string contactnumber);
    list <Student> studentlist;
    void addstudent(string name,int id,int usn,string contactnumber);
};

#endif
