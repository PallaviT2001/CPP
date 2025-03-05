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

Student::Student(string name, int age, int usn, string contactnumber)
{
    m_name=name;
    m_age=age;
    m_usn=usn;
    m_contactnumber=contactnumber;
}

void Student::addstudent(string name,int id,int usn,string contactnumber)
{
    studentlist.emplace_back("Pallavi1",23,123456,"123456987");
    studentlist.emplace_back("Pallavi2",23,123456,"123456987");
    studentlist.emplace_back("Pallavi3",23,123456,"123456987");
    studentlist.emplace_back("Pallavi4",23,123456,"123456987");
    studentlist.emplace_back("Pallavi5",23,123456,"123456987");
    studentlist.emplace_back("Pallavi6",23,123456,"123456987");
    studentlist.emplace_back("Pallavi7",23,123456,"123456987");
    studentlist.emplace_back("Pallavi8",23,123456,"123456987");
    studentlist.emplace_back("Pallavi9",23,123456,"123456987");
    studentlist.emplace_back("Pallavi10",23,123456,"123456987");
}
