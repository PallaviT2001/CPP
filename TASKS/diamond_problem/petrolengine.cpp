#include "petrolengine.h"
#include <iostream>
using namespace std;

Petrolengine::Petrolengine()
{
    cout<<"petrolengine default constructor called"<<endl;
}

Petrolengine::~Petrolengine()
{
    cout<<"petrol engine class destructor called"<<endl;
}

/*void petrolengine::start()
{
    cout<<"petrol engine class start function called"<<endl;
}*/

Petrolengine::Petrolengine(int engineid, string enginename)
{
    cout<<"petrolengine parameterized constructor called"<<endl;
}
