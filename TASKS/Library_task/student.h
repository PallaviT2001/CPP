#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
private:
    int studentid;
    string studentname;
public:
    Student();
    ~Student();
    Student(int studentid,string studentname);

    int getstudentid();
    string getstudentname();
};

#endif // STUDENT_H
