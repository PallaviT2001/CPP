#include "fileoperation.h"
Fileoperation::Fileoperation() {}
Fileoperation::~Fileoperation() {}

void Fileoperation::writeData(list<Wifi*>& wifilist)
{
    ofstream file("wifi.csv", ios::trunc);
    if (!file)
    {
        cout << "Error opening wifi file for writing!" << endl;
        return;
    }

    for (auto& wifi : wifilist)
    {
        file << wifi->getwifiname() << "," << wifi->getsignalstrength() << "," << wifi->getstatus() << "," << wifi->getpassword() << "\n";
    }

    file.close();
}

list<Wifi*> Fileoperation::readData()
{
    list<Wifi*> wifilist;
    ifstream file("wifi.csv");
    if (!file)
    {
        cout << "Error opening wifi file for reading!" << endl;
        return wifilist;
    }

    string wifiname, status;
    int signalstrength, password;

    while (getline(file, wifiname, ',') && file >> signalstrength && file.ignore() && getline(file, status, ',') && file >> password && file.ignore())
    {
        wifilist.push_back(new Wifi(wifiname, signalstrength, status, password));
    }

    file.close();
    return wifilist;
}
