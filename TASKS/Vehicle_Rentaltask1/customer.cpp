#include "customer.h"
#include <iostream>
using namespace std;

Customer::Customer()
{
    //cout<<"customer details constructor called"<<endl;
}

Customer::~Customer()
{
    //cout<<"customer details destructor called"<<endl;
}

Customer::Customer(string customername, string dlno, string address,string bookingid)
{
    m_customername=customername;
    m_dlno=dlno;
    m_address=address;
    m_bookingid=bookingid;
}

string Customer::getname()
{
    return m_customername;
}

string Customer::getdlno()
{
    return m_dlno;
}

string Customer::getaddress()
{
    return m_address;
}

string Customer::getbookingid()
{
    return m_bookingid;
}

// void Customerdetails::setupiid(string upiid)
// {
//     m_upiid=upiid;
// }

// void Customerdetails::settranscationid(string transactionid)
// {
//     this->transactionid=transactionid;
// }


