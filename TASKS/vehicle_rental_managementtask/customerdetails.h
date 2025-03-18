#ifndef CUSTOMERDETAILS_H
#define CUSTOMERDETAILS_H
#include <string>
using namespace std;

class Customerdetails
{
private:
    string m_customername;
    string m_dlno;
    string m_address;
public:
    Customerdetails();
    ~Customerdetails();
    Customerdetails(string customername,string dlno,string address);

    string getname();
    string getdlno();
    string getaddress();
};
#endif
