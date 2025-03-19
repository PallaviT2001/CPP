#include "customerdetails.h"
#include <iostream>
using namespace std;

Customerdetails::Customerdetails()
{
    cout<<"customer details constructor called"<<endl;
}

Customerdetails::~Customerdetails()
{
    cout<<"customer details destructor called"<<endl;
}

Customerdetails::Customerdetails(string customername, string dlno, string address,string bookingid)
{
    m_customername=customername;
    m_dlno=dlno;
    m_address=address;
    m_bookingid=bookingid;
}

string Customerdetails::getname()
{
    return m_customername;
}

string Customerdetails::getdlno()
{
    return m_dlno;
}

string Customerdetails::getaddress()
{
    return m_address;
}

string Customerdetails::getbookingid()
{
    return m_bookingid;
}
