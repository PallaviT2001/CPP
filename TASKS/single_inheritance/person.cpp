#include "person.h"
#include <iostream>
#include <string>
using namespace std;

person::person()
{

}

person::~person()
{
    cout<<"person class destructor called"<<endl;
}

person::person(string name, int age, int contactnumber, float height)
{
    this->name=name;
    this->age=age;
    this->contactnumber=contactnumber;
    this->height=height;
    cout<<name<<" "<<age<<" "<<contactnumber<<" "<<height<<endl;
}
