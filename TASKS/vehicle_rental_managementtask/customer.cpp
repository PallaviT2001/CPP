#include "customer.h"
#include <iostream>
using namespace std;

Customer::Customer()
{
    cout<<"customer constructor called"<<endl;
}

Customer::~Customer()
{
    cout<<"customer destructor called"<<endl;
}

string Customer::getcustomername()
{
    return m_customername;
}

string Customer::getaddress()
{
    return m_address;
}

int Customer::getbookingid()
{
    return m_bookingid;
}


