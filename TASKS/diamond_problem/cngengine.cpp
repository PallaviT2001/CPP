#include "cngengine.h"
#include <iostream>
using namespace std;

Cngengine::Cngengine()
{
    cout<<"cngengine default constructor called"<<endl;
}

Cngengine::~Cngengine()
{
    cout<<"cngengine class destructor called"<<endl;
}

/*void cngengine::start()
{
    cout<<"cng engine class start function called"<<endl;
}*/

Cngengine::Cngengine(int engineid, string enginename)
{
    cout<<"cngengine parameterized constructor called"<<endl;
}
