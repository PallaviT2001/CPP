#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
using namespace std;
#include "vehicle.h"

class Customer
{
private:
    string m_customername;
    int m_bookingid;
    string m_address;
    Vehicle vobj;
public:
    Customer();
    ~Customer();
    Customer(string customername,int bookingid,string address);

    string getcustomername();
    int getbookingid();
    string getaddress();
};

#endif
