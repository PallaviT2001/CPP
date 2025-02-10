#include "hybridcar.h"
#include <iostream>
using namespace std;

Hybridcar::Hybridcar()
{
    cout<<"hybridcar default constructor called"<<endl;
}

Hybridcar::~Hybridcar()
{
    cout<<"hybridcar destructor called"<<endl;
}

void Hybridcar::start()
{
    cout<<"hybrid car start function called"<<endl;
}

Hybridcar:: Hybridcar(int engineid,string enginename):Engine(engineid,enginename)
{
    cout<<"hybridcar parameterized constructor called"<<endl;
}
