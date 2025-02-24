#include "ac.h"

Polycab::Polycab()
{
    cout<<"Wire Default Constructor Called"<<endl;
}

Polycab::~Polycab()
{
    cout<<"Wire Destructor Called"<<endl;
}

void Polycab::setac(AC *ac)
{
    acptr = ac;
}

void Polycab::wireOn()
{
    cout<<"polycab wire on"<<endl;
    acptr->acOn();
}
