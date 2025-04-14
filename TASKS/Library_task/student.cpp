#include "student.h"
#include <iostream>
using namespace std;

Student::Student()
{
    cout<<"student constructor called"<<endl;
}

Student::~Student()
{
    cout<<"student destructor called"<<endl;
}

Student::Student(int studentid,string studentname)
{
    this->studentid=studentid;
    this->studentname=studentname;
}

int Student::getstudentid()
{
    return studentid;
}

string Student::getstudentname()
{
    return studentname;
}


