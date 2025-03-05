#ifndef STUDENT_H
#define STUDENT_H
#include "personaldetails.h"
#include <list>

class Student:public Personaldetails
{
public:
    Student();
    ~Student();
    Student(int id, string name,int age);
    int getId();
    string getname();
    int getage();
    void setDetails(string name,int age);
    void display();
};

#endif
