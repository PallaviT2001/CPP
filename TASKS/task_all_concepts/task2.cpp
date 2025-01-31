#include <iostream>
using namespace std;
#include "task2.h"
#include "task1.h"

task2::task2(int id, const string name)
{
    task1 obj(id, name);
    obj.display();
}
task2::~task2()
{
    cout<<"task 2 destroyed"<<endl;
}
