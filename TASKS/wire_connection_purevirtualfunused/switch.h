#ifndef SWITCH_H
#define SWITCH_H

#include "wire.h"
#include "ac.h"
#include <iostream>
using namespace std;

class Switch
{
    string m_colour;
    string m_state;
    string m_brand;
    string m_name;
    int m_price;
    Wire* m_wire;

public:
    Switch();
    Switch(string colour, string state, string brand, string name, int price, Wire* wire);
    ~Switch();

    void initializewiretoswitch(Wire *wire);
    void switchOn();
};

#endif // SWITCH_H
