#include "finolex.h"
#include"ac.h"
#include <iostream>
using namespace std;

Finolex::Finolex()
{
    cout<<"finolex constructor called"<<endl;
}

Finolex::~Finolex()
{
    cout<<"finolex destructor called"<<endl;
}

void Finolex::setac(AC *ac)
{
    acptr = ac;
}

void Finolex::wireOn()
{
    cout<<"finolex wire on"<<endl;
    acptr->acOn();
}
