#include "student.h"
#include <iostream>
using namespace std;
#include "string"

student::student()
{
    cout<<"student class constructor called"<<endl;
}

student::~student()
{
    cout<<"student class destructor called"<<endl;
}

student::student(int id, string name, int contactnumber)
{
    this->id=id;
    this->name=name;
    this->contactnumber=contactnumber;
    cout<<id<<" "<<name<<" "<<contactnumber<<endl;
}

void student::display()
{
    cout<<id<<" "<<name<<" "<<contactnumber<<endl;

}

int student::getid()
{
    return id;
}

void student::setid(int id)
{
    this->id=id;
}

string student::getname()
{

    return name;
}

void student::setname(string name)
{
    this->name=name;
}

/*student::student()
{
    cout<<"constructor"<<endl;
}

student::~student()
{
    cout<<"destructor"<<endl;
}*/
