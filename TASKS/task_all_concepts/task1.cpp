#include "task1.h"
#include "task2.h"
#include <iostream>
using namespace std;

task1::task1(int id, const string name)
{
    this->id=id;
    this->name=name;
}
/*task1::task1()
{

}*/

void task1::display()const
{
    cout << "ID: " <<id<< ", Name: " <<name<<endl;
}

void task1::display(const string message)
{
    //task1 obj1;
    //cout<<obj1.id<<obj1.name;
    cout << "Static message: " <<message <<endl;
}
task1::~task1()
{
    cout<<"task 1 destroyed"<<endl;
}
