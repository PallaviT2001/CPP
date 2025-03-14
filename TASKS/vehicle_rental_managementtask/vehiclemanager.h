#ifndef VEHICLEMANAGER_H
#define VEHICLEMANAGER_H
#include <list>
#include "bike.h"

class Vehiclemanager
{
private:
    list<bike>bikelist;
    list<car>carlist;
    list<customer>customerlist;
public:
    Vehiclemanager();
    ~Vehiclemanager();
    void addbike();
    void addcar();
    void updatebike();
    void updatecar();
    void returnbike();
    void returncar();

};
#endif
