#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
private:
    int m_id;
    string m_name;
    int m_age;
public:
    Student();
    ~Student();
    Student(int id,string name,int age);
    int getid() const;
    string getname() const;
    int getage() const;
};

#endif
