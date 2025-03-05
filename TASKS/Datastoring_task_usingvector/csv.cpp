#include "csv.h"
#include <iostream>
using namespace std;

CSV::CSV()
{
    cout<<"csv constructor called"<<endl;
}

CSV::~CSV()
{
    cout<<"csv destructor called"<<endl;
}

list<Student>CSV::readData()
{
    cout<<"csv file read data called"<<endl;
}

