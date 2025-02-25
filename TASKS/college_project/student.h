#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <list>
using namespace std;

class Student
{
private:
    int id;
    string name;
    int age;
public:
    Student();
    ~Student();
    list <Student> studentlist;
    Student(int id,string name,int age);

    void display() const;
    void displaystudents() const;

    void addstudent(int id,string name,int age);
    void deletestudent(int id);
    void updatestudent(int id);
    void findstudent(int id);

    int getid();
    void setdetails(string name,int age);
};
#endif
