#include "finolex.h"
#include <iostream>
using namespace std;

Finolex::Finolex()
{
    cout<<"finolex constructor called"<<endl;
}

Finolex::~Finolex()
{
    cout<<"finolex destructor called"<<endl;
    delete a;
}
