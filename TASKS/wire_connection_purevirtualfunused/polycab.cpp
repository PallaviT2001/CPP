#include "polycab.h"

Polycab::Polycab()
{
    cout<<"Polycab Constructor Called"<<endl;

}

Polycab::~Polycab()
{
    cout<<"Polycab Destructor Called"<<endl;

}
void Polycab::setac(AC *ac)
{
    acptr = ac;
}

void Polycab::wireOn()
{
    cout<<"Polycab Wire on"<<endl;
    acptr->acOn();
}
