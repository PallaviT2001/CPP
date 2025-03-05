#ifndef STUDENTMANAGEMENT_H
#define STUDENTMANAGEMENT_H
#include <iostream>
using namespace std;

class Student
{
    string m_name;
    int m_age;
    int m_USN;
    string m_mobileNumber;
    Student *m_student;
public:
    Student();
    ~Student();
    Student (string name, int age, int usn, string number);
    string getname();
    int getage();
    int getusn();
    string getnumber();
};

#endif
