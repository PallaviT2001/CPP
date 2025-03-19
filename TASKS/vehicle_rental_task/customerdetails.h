#ifndef CUSTOMERDETAILS_H
#define CUSTOMERDETAILS_H
#include "vehicle.h"
#include <string>
using namespace std;

class Customerdetails:public Vehicle
{
private:
    string m_customername;
    string m_dlno;
    string m_address;
    string m_bookingid;
public:
    Customerdetails();
    ~Customerdetails();
    Customerdetails(string customername,string dlno,string address,string bookingid);

    string getname();
    string getdlno();
    string getaddress();
    string getbookingid();
};
#endif
