#include "employe.h"
#include "person.h"
using namespace std;
#include<iostream>

employe::employe()
{

}

employe::~employe()
{
    cout<<"employee class destructor called"<<endl;
}

employe::employe(string name,int age,int contactnumber,float height,int employeid,float salary):person(name,age,contactnumber,height)
{
    this->employeid=employeid;
    this->salary=salary;
    cout<<employeid<<" "<<salary<<endl;
}
