#ifndef WIFI_H
#define WIFI_H
#include <iostream>
using namespace std;

class Wifi
{
private:
    string m_wifiname;
    int m_signalstrength;
    string m_status;
    int m_password;
public:
    Wifi();
    ~Wifi();
    Wifi(string wifiname, int signalstrength, string status, int password);

    string getwifiname();
    int getsignalstrength();
    string getstatus();
    int getpassword();

    void setstatus(string status);
};

#endif
