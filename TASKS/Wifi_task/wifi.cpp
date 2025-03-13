#include "wifi.h"


Wifi::Wifi()
{
    cout<<"wifi constructor called"<<endl;
}

Wifi::~Wifi()
{
    cout<<"wifi destructor called"<<endl;
}

Wifi::Wifi(string wifiname, int signalstrength, string status, int password)
{
    m_wifiname=wifiname;
    m_signalstrength=signalstrength;
    m_status=status;
    m_password=password;
}

string Wifi::getwifiname()
{
    return m_wifiname;
}

int Wifi::getsignalstrength()
{
    cout<<"get strength fun called"<<endl;
    return m_signalstrength;
}

string Wifi::getstatus()
{
    cout<<"get status fun called"<<endl;
    return m_status;
}

int Wifi::getpassword()
{
    return m_password;
}

void Wifi::setstatus(string status)
{
    m_status=status;
}
