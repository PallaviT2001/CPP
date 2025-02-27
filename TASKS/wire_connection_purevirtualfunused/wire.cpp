#include "wire.h"
#include "ac.h"

Wire::Wire()
{
    cout<<"Wire Default Constructor Called"<<endl;
}

Wire::Wire(float thickness, float length, string colour, string brand, float price)
{
    cout<<"Wire Parameterized Constructor Called"<<endl;
}

Wire::~Wire()
{
    cout<<"Wire Destructor Called"<<endl;
}
// void Wire::setMe(AC *ac)
// {
//     acptr = ac;
// }


// void Wire::wireOn()
// {
//     acptr->acOn();
// }
