#include "json.h"
#include <iostream>
using namespace std;

JSON::JSON()
{
    cout<<"json constructor called"<<endl;
}

JSON::~JSON()
{
    cout<<"json destructor called"<<endl;
}

list<Student>JSON::readData()
{
    cout<<"csv file read data called"<<endl;
}

