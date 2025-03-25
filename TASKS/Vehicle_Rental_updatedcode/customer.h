#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "rentalvehicledetails.h"
#include <string>
using namespace std;

class Customer:public Rentalvehicledetails
{
private:
    string m_customername;
    string m_dlno;
    string m_address;
    string m_bookingid;
public:
    Customer();
    ~Customer();
    Customer(string customername,string dlno,string address,string bookingid/*string upiid,string transactionid*/);

    string getname();
    string getdlno();
    string getaddress();
    string getbookingid();

    void setupiid(string upiid);
    void settranscationid(string transactionid);
};
#endif
