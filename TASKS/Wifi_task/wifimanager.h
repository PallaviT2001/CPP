#ifndef WIFIMANAGER_H
#define WIFIMANAGER_H
#include "wifi.h"

class Wifimanager
{
private:
    list<Wifi*>Wifilist;
public:
    Wifimanager();
    ~Wifimanager();

    //void writeData();
    list<Wifi*> readData();

    void display();
    void sortwifi();
    void connection();
};

#endif
