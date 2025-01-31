#include "wire.h"

void wire::printwire()
{
    cout<<length<<" "<<thickness<<" "<<brand<<" "<<color<<" "<<price<<endl;

}

wire::wire(int length1,float thickness1,string brand1, string color1,float price1)
{
    length=length1;
    thickness=thickness1;
    brand=brand1;
    color=color1;
    price=price1;
}

wire::wire()
{

}
