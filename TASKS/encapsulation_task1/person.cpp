#include "person.h"
#include <iostream>
using namespace std;

person::person()
{

}

person::~person()
{

}

person::person(string name,int id,int age,int contactnumber)
{
    this->name=name;
    this->id=id;
    this->age=age;
    this->contactnumber=contactnumber;
    cout<<name<<" "<<id<<" "<<age<<" "<<contactnumber<<endl;

}

void person::setname(string a)
{
    name=a;
}

string person::getname()
{
    return name;
}

void person::setid(int b)
{
    id=b;
}

int person::getid()
{
    return id;
}

void person::setage(int c)
{
    age=c;
}

int person::getage()
{
    return age;
}

void person::setcontactnumber(int d)
{
    contactnumber=d;
}

int person::getcontactnumber()
{
    return contactnumber;
}






