#include "wifimanager.h"
Wifimanager::Wifimanager()
{
    cout << "Wifi manager constructor called" << endl;
    Fileoperation fobj;
    Wifilist = fobj.readData();
}

Wifimanager::~Wifimanager()
{
    cout << "Wifi manager destructor called" << endl;
    for (auto wifi : Wifilist)
    {
        delete wifi;
    }
    Wifilist.clear();
}

void Wifimanager::display()
{
    for (auto wifi : Wifilist)
    {
        cout << "Wifi name: " << wifi->getwifiname() << ", Signal Strength: " << wifi->getsignalstrength()
        << ", Status: " << wifi->getstatus() << ", Password: " << wifi->getpassword() << endl;
    }
}

void Wifimanager::sortwifi()
{
    Wifilist.sort([](Wifi* a, Wifi* b) {
        if (a->getstatus() == "connected") return true;
        if (b->getstatus() == "connected") return false;
        if (a->getstatus() == "active" && b->getstatus() == "saved") return true;
        if (a->getstatus() == "saved" && b->getstatus() == "active") return false;
        return a->getsignalstrength() > b->getsignalstrength();
    });
}

void Wifimanager::connection()
{
    string wifiname;
    int password;
    cout << "Enter WiFi name to connect: ";
    cin >> wifiname;

    for (auto wifi : Wifilist)
    {
        if (wifi->getstatus() == "connected" && wifi->getwifiname() == wifiname)
        {
            cout << "WiFi " << wifiname << " is already connected." << endl;
            return;
        }
    }

    for (auto wifi : Wifilist)
    {
        if (wifi->getstatus() == "connected")
        {
            cout << "Disconnecting from " << wifi->getwifiname() << " and saving it." << endl;
            wifi->setstatus("saved");
        }
    }

    for (auto wifi : Wifilist)
    {
        if (wifi->getwifiname() == wifiname)
        {
            if (wifi->getstatus() == "saved")
            {
                cout << "Connecting to " << wifiname << endl;
                wifi->setstatus("connected");
                return;
            }
            else if (wifi->getstatus() == "active")
            {
                cout << "Enter password for " << wifiname << ": ";
                cin >> password;
                if (password == wifi->getpassword())
                {
                    cout << "Correct password. Connecting to " << wifiname << endl;
                    wifi->setstatus("connected");
                }
                else
                {
                    cout << "Incorrect password." << endl;
                }
                return;
            }
        }
    }
    cout << "WiFi not found." << endl;
}

