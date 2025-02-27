#include "finolex.h"

Finolex::Finolex()
{
    cout<<"Finolex Constructor Called"<<endl;
}

Finolex::~Finolex()
{
    cout<<"Finolex Destructor Called"<<endl;

}

void Finolex::setac(AC *ac)
{
    acptr = ac;
}

void Finolex::wireOn()
{
    cout<<"Finolex Wire on"<<endl;
    acptr->acOn();
}
