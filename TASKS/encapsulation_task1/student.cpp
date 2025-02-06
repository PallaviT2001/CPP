#include "student.h"
#include "person.h"
#include <iostream>
using namespace std;

student::student()
{

}

student::~student()
{
    cout<<"student class destructor called"<<endl;
}

student::student(float fees,string address,string name,int id,int age,int contactnumber):person(name,id,age,contactnumber)
{
    this->fees=fees;
    this->address=address;
    cout<<fees<<" "<<address<<endl;
}


void student::setfees(float a)
{
    fees=a;
}

float student::getfees()
{
    return fees;
}

void student::setaddress(string b)
{
    address=b;
}

string student::getaddress()
{
    return address;
}

void student::setmid(int j)
{
    mid=j;
}

int student::getmid()
{
    return mid;
}
