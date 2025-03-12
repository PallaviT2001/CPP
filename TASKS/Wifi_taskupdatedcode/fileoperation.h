#ifndef FILEOPERATION_H
#define FILEOPERATION_H
#include <list>
#include "wifi.h"
#include <iostream>
#include <fstream>

using namespace std;

class Fileoperation
{
public:
    Fileoperation();
    ~Fileoperation();

    void writeData(list<Wifi*>& wifilist);
    list<Wifi*> readData();
};

#endif
