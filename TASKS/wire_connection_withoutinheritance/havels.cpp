#include "havels.h"
#include"ac.h"
#include <iostream>
using namespace std;

Havels::Havels()
{
    cout<<"Havells constructor called"<<endl;
}

Havels::~Havels()
{
    cout<<"Havels destructor called"<<endl;
}

void Havels::setac(AC *ac)
{
    acptr = ac;
}

void Havels::wireOn()
{
    cout<<"Havels wire on"<<endl;
    acptr->acOn();
}
