#include"studentRecord.h"
#include<iostream>

StudentRecord::StudentRecord(Student &student)
{
    cout<<"StudentRecord Constructor called"<<endl;
    m_studentList.push_back(new Student(student.getName(),student.getID()));
}

StudentRecord::~StudentRecord()
{
    cout<<"StudentRecord Destructor called"<<endl;
}

void StudentRecord::display()
{
    for(auto student: m_studentList)
    {
        cout<<student->getName()<<" "<<student->getID()<<endl;
    }
}
