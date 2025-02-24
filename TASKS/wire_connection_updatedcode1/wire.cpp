#include "wire.h"
#include "ac.h"

Wire::Wire()
{
    cout<<"Wire Default Constructor Called"<<endl;
}

Wire::~Wire()
{
    cout<<"Wire Destructor Called"<<endl;
}

Wire::Wire(float thickness, float length, string colour, string brand, float price)
{
    cout<<"Wire Parameterized Constructor Called"<<endl;
}

void Wire::setac(AC *ac)
{
    acptr = ac;
}

void Wire::wireOn()
{
    cout<<"wire on"<<endl;
    acptr->acOn();
}
