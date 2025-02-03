#include "phone.h"
#include <iostream>
using namespace std;

phone::phone() {

}

phone::~phone()
{
    cout<<"phone class destructor called"<<endl;
}

void phone::makecall()
{
    cout<<"makecall function called"<<endl;
}

void phone::display()
{
    cout<<"phone display function called"<<endl;
}

phone::phone(int phonenumber,string color)
{
    this->phonenumber=phonenumber;
    this->color=color;
    cout<<phonenumber<<" "<<color<<endl;
}
