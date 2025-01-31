#include "student.h"
#include<iostream>
#include <string>
using namespace std;

student::student(string name,int id,int age,int contactnumber)
{
    m_name=new string;
    *m_name=name;

    m_id=new int;
    *m_id=id;

    m_age=new int;
    *m_age=age;

    m_contactnumber=new int;
    *m_contactnumber=contactnumber;
}

void student::printme(){

    cout<<*m_name<<" "<<*m_id<<" "<<*m_age<<" "<<*m_contactnumber<<endl;
}

student::~student()
{
    cout<<"constructor destroyed";
    delete m_name;
    delete m_id;
    delete m_age;
    delete m_contactnumber;
}
