#include "senioremploye.h"
#include "person.h"
using namespace std;
#include <iostream>
#include <string>

senioremploye::senioremploye()
{

}

senioremploye::~senioremploye()
{
    cout<<"senior employee destructor called"<<endl;
}

senioremploye::senioremploye(string name,int age,int contactnumber,float height,int employeid,float salary):person(name,age,contactnumber,height)
{
    this->employeid=employeid;
    this->salary=salary;
    cout<<employeid<<" "<<salary<<endl;
}
