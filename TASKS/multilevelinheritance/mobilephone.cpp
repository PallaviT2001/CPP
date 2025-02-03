#include "mobilephone.h"
#include <iostream>
using namespace std;

mobilephone::~mobilephone()
{
    cout<<"mobilephone destructor called"<<endl;
}

mobilephone::mobilephone(string color,float price)
{
    cout<<"mobilephone constructor called"<<endl;
    this->color=color;
    this->price=price;
    cout<<color<<" "<<price<<endl;
}



