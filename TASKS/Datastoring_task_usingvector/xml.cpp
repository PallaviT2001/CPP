#include "xml.h"
#include <iostream>
using namespace std;

XML::XML()
{
    cout<<"xml constructor called"<<endl;
}

XML::~XML()
{
    cout<<"xml destructor called"<<endl;
}

list<Student>XML::readData()
{
    cout<<"csv file read data called"<<endl;
}
