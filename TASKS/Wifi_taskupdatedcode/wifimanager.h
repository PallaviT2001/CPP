#ifndef WIFIMANAGER_H
#define WIFIMANAGER_H
#include "wifi.h"
#include "fileoperation.h"
#include <list>

class Wifimanager
{
private:
    list<Wifi*> Wifilist;
public:
    Wifimanager();
    ~Wifimanager();

    void display();
    void sortwifi();
    void connection();
};

#endif
