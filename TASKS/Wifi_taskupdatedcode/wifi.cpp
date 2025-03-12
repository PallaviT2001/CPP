#include "wifi.h"
Wifi::Wifi() {}
Wifi::~Wifi() {}

Wifi::Wifi(string wifiname, int signalstrength, string status, int password) : m_wifiname(wifiname), m_signalstrength(signalstrength), m_status(status), m_password(password) {}

string Wifi::getwifiname() { return m_wifiname; }
int Wifi::getsignalstrength() { return m_signalstrength; }
string Wifi::getstatus() { return m_status; }
int Wifi::getpassword() { return m_password; }
void Wifi::setstatus(string status) { m_status = status; }
