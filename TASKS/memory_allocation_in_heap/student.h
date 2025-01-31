#ifndef STUDENT_H
#define STUDENT_H
#include<string>
using namespace std;

class student
{
public:
    student();
    student(string m_name,int m_id,int m_age,int m_contactnumber);
    ~student();
    string *m_name;
    int *m_id;
    int *m_age;
    int *m_contactnumber;
    void printme();

};
#endif

