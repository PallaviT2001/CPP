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

Student::Student(int id, string name, int age)
{
    this->id=id;
    this->name=name;
    this->age=age;
    cout<<"student details are"<<id<<" "<<name<<" "<<age<<" "<<endl;
}
void Student::display() const
{
    cout<<id<<" "<<name<<" "<<age<<endl;
}

void Student::displaystudents() const
{
    for(const auto &student:studentlist)
    {
        student.display();
    }
}
void Student::addstudent(int id, string name, int age)
{
    studentlist.emplace_back(id,name,age);
}

void Student::deletestudent(int id)
{
    for(auto i=studentlist.begin();i!=studentlist.end();++i)
    {
        if(i->getid()==id)
        {
            studentlist.erase(i);
            cout<<"student with id"<< i->getid()<<"removed"<<endl;
            return;
        }
    }
    cout<<"student with id not found"<<endl;
}

void Student::updatestudent(int id)
{
    for(auto &student:studentlist)
    {
        if(student.getid()==id)
        {
            string name;
            int age;
            cout<<"enter new name"<<endl;
            cin>>name;
            cout<<"enter new age"<<endl;
            cin>>age;
            student.setdetails(name,age);
            cout<<"student details upadted"<<endl;
            return;
        }
    }
    cout<<"student id not found to update"<<endl;
}

void Student::findstudent(int id)
{
    for(auto i=studentlist.begin();i!=studentlist.end();++i)
    {
        if(i->getid()==id)
        {
            cout<<"student found"<<endl;
            return;
        }
    }
    cout<<"student not found"<<endl;
}

int Student::getid()
{
    return id;
}
void Student::setdetails(string name, int age)
{
    this->name=name;
    this->age=age;
}
